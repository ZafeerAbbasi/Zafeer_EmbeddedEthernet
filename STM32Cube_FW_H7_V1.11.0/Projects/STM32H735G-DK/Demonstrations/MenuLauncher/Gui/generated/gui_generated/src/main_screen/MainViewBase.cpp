/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

MainViewBase::MainViewBase() :
    buttonCallback(this, &MainViewBase::buttonCallbackHandler)
{
    backGround.setXY(0, 0);
    backGround.setBitmap(touchgfx::Bitmap(BITMAP_BG_ID));

    gradient.setXY(90, 232);
    gradient.setBitmap(touchgfx::Bitmap(BITMAP_GRADIENT_ID));

    enterButton.setXY(180, 242);
    enterButton.setBitmaps(touchgfx::Bitmap(BITMAP_TAB_ID), touchgfx::Bitmap(BITMAP_TAB_ID));
    enterButton.setAction(buttonCallback);

    descriptionContianer.setPosition(0, -23, 480, 114);

    header.setPosition(90, 30, 300, 38);
    header.setColor(touchgfx::Color::getColorFrom24BitRGB(33, 58, 89));
    header.setLinespacing(0);
    header.setTypedText(touchgfx::TypedText(T_HEADEREEMBC));
    descriptionContianer.add(header);

    description2.setPosition(0, 79, 480, 28);
    description2.setColor(touchgfx::Color::getColorFrom24BitRGB(33, 58, 89));
    description2.setLinespacing(0);
    description2.setAlpha(0);
    description2.setTypedText(touchgfx::TypedText(T_DESCRIPTIONOSCILLOSCOPE2));
    descriptionContianer.add(description2);

    description1.setPosition(0, 59, 480, 28);
    description1.setColor(touchgfx::Color::getColorFrom24BitRGB(33, 58, 89));
    description1.setLinespacing(0);
    description1.setAlpha(0);
    description1.setTypedText(touchgfx::TypedText(T_DESCRIPTIONOSCILLOSCOPE1));
    descriptionContianer.add(description1);

    exitButton.setXY(180, 0);
    exitButton.setBitmaps(touchgfx::Bitmap(BITMAP_TAB_REVERSE_ID), touchgfx::Bitmap(BITMAP_TAB_REVERSE_ID));
    exitButton.setAction(buttonCallback);
    exitButton.setAlpha(0);
    descriptionContianer.add(exitButton);

    startTextureMapper.setXY(375, 167);
    startTextureMapper.setVisible(false);
    startTextureMapper.setBitmap(touchgfx::Bitmap(BITMAP_LAUNCH_BUTTON_ID));
    startTextureMapper.setWidth(80);
    startTextureMapper.setHeight(80);
    startTextureMapper.setBitmapPosition(5.000f, 5.000f);
    startTextureMapper.setScale(0.000f);
    startTextureMapper.setCameraDistance(1000.000f);
    startTextureMapper.setOrigo(40.000f, 40.000f, 1000.000f);
    startTextureMapper.setCamera(40.000f, 40.000f);
    startTextureMapper.updateAngles(0.000f, 0.000f, 0.000f);
    startTextureMapper.setRenderingAlgorithm(touchgfx::TextureMapper::NEAREST_NEIGHBOR);

    add(backGround);
    add(gradient);
    add(enterButton);
    add(descriptionContianer);
    add(startTextureMapper);
}

void MainViewBase::setupScreen()
{

}

void MainViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &enterButton)
    {
        //EnterDemoInteraction
        //When enterButton clicked call virtual function
        //Call enterDemo
        enterDemo();
    }
    else if (&src == &exitButton)
    {
        //ExitDemoInteraction
        //When exitButton clicked call virtual function
        //Call exitDemo
        exitDemo();
    }
}
