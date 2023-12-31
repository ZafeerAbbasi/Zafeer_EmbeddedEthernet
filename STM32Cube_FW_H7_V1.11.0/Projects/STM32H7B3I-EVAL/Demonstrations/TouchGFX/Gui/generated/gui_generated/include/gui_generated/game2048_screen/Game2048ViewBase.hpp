/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef GAME2048VIEWBASE_HPP
#define GAME2048VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/game2048_screen/Game2048Presenter.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <gui/containers/McuLoadWidget.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/containers/ModalWindow.hpp>
#include <touchgfx/Color.hpp>

#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/FadeAnimator.hpp>
#include <touchgfx/mixins/MoveAnimator.hpp>
class Game2048ViewBase : public touchgfx::View<Game2048Presenter>
{
public:
    Game2048ViewBase();
    virtual ~Game2048ViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void newGamePressed()
    {
        // Override and implement this function in Game2048
    }

    virtual void autoPlayPressed()
    {
        // Override and implement this function in Game2048
    }

    virtual void howToPlayPressed()
    {
        // Override and implement this function in Game2048
    }

    virtual void closeHowToPlayPressed()
    {
        // Override and implement this function in Game2048
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image background;
    touchgfx::Button newGameButton;
    touchgfx::ToggleButton autoPlayButton;
    touchgfx::Button howToPlayButton;
    touchgfx::Button gotoMenu;
    McuLoadWidget mcuLoad;
    touchgfx::TextAreaWithOneWildcard scoreTxt;
    touchgfx::FadeAnimator< touchgfx::MoveAnimator< touchgfx::TextAreaWithOneWildcard > > deltaScoreTxt;
    touchgfx::Image endGameStatus;
    touchgfx::ModalWindow howToPlayModalWindow;
    touchgfx::Button closeHowToPlayButton;


    /*
     * Wildcard Buffers
     */
    static const uint16_t SCORETXT_SIZE = 10;
    touchgfx::Unicode::UnicodeChar scoreTxtBuffer[SCORETXT_SIZE];
    static const uint16_t DELTASCORETXT_SIZE = 10;
    touchgfx::Unicode::UnicodeChar deltaScoreTxtBuffer[DELTASCORETXT_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Game2048ViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // GAME2048VIEWBASE_HPP
