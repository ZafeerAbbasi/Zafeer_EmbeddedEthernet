/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <simulator/mainBase.hpp>
#include <platform/hal/simulator/sdl2/HALSDL2.hpp>
#include <common/TouchGFXInit.hpp>

void setupSimulator(int argc, char** argv, touchgfx::HAL& hal) {
    // Simulate hardware running at 60Hz generating a vsync every 16.6667 ms
    static_cast<touchgfx::HALSDL2&>(hal).setVsyncInterval(16.6667f);
    static_cast<touchgfx::HALSDL2&>(hal).setWindowTitle("audio_player_demo");

    // Initialize SDL
    bool sdl_init_result = static_cast<touchgfx::HALSDL2&>(hal).sdl_init(argc, argv);
    assert(sdl_init_result && "Error during SDL initialization");

}
