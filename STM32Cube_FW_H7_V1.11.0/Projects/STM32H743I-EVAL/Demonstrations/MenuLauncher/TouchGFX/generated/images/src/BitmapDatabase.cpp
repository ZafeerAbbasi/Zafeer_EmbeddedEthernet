// 4.12.2 dither_algorithm=2 alpha_dither=yes layout_rotation=0 opaque_image_format=RGB565 non_opaque_image_format=ARGB8888 section=ExtFlashSection extra_section=ExtFlashSection generate_png=no 0xc93b63c3
// Generated by imageconverter. Please, do not edit!

#include <touchgfx/Bitmap.hpp>
#include <BitmapDatabase.hpp>

extern const unsigned char _background[]; // BITMAP_BACKGROUND_ID = 0, Size: 640x480 pixels
extern const unsigned char _embeddedwizardlarge[]; // BITMAP_EMBEDDEDWIZARDLARGE_ID = 1, Size: 196x196 pixels
extern const unsigned char _embeddedwizardsmall[]; // BITMAP_EMBEDDEDWIZARDSMALL_ID = 2, Size: 196x196 pixels
extern const unsigned char _stemwinlarge[]; // BITMAP_STEMWINLARGE_ID = 3, Size: 196x196 pixels
extern const unsigned char _stemwinsmall[]; // BITMAP_STEMWINSMALL_ID = 4, Size: 196x196 pixels
extern const unsigned char _stm32[]; // BITMAP_STM32_ID = 5, Size: 551x56 pixels
extern const unsigned char _touchgfxlarge[]; // BITMAP_TOUCHGFXLARGE_ID = 6, Size: 196x196 pixels
extern const unsigned char _touchgfxsmall[]; // BITMAP_TOUCHGFXSMALL_ID = 7, Size: 196x196 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { _background, 0, 640, 480, 0, 0, 640, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 480, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 },
    { _embeddedwizardlarge, 0, 196, 196, 19, 18, 158, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 160, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _embeddedwizardsmall, 0, 196, 196, 28, 28, 139, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 139, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _stemwinlarge, 0, 196, 196, 19, 18, 158, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 160, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _stemwinsmall, 0, 196, 196, 28, 28, 139, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 139, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _stm32, 0, 551, 56, 74, 21, 5, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 26, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _touchgfxlarge, 0, 196, 196, 19, 18, 158, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 160, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _touchgfxsmall, 0, 196, 196, 28, 28, 139, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 139, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}
uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}