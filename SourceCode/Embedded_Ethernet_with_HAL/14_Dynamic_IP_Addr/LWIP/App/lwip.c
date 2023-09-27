#include "lwip.h"
#include "lwip/init.h"


struct netif gnetif;
ip4_addr_t ipaddr;
ip4_addr_t netmask;
ip4_addr_t gw;

uint8_t IP_ADDRESS[4];
uint8_t NETMASK_ADDRESS[4];
uint8_t GATEWAY_ADDRESS[4];



void lwip_lib_init(void)
{

	 ipaddr.addr = 0;
	 netmask.addr = 0;
	 gw.addr = 0;

	 /*Initialize lwip stack  without RTOS*/
	 lwip_init();
	 /*Add network interface without using RTOS*/
	 netif_add(&gnetif,&ipaddr,&netmask,&gw,NULL,&ethernetif_init,&ethernet_input);

	 /*Register default netif */
	 netif_set_default(&gnetif);

	 /*Check if link is up*/
	 if(netif_is_link_up(&gnetif))
	 {
		 netif_set_up(&gnetif);
	 }
	 else
	 {
		 netif_set_down(&gnetif);
	 }


	 /*Set link change callback*/
	 netif_set_link_callback(&gnetif,ethernetif_update_config);

	 /*Enable DHCP*/
	 dhcp_start(&gnetif);

}



void lwip_process(void)
{
	ethernetif_input(&gnetif);
	sys_check_timeouts();
}
