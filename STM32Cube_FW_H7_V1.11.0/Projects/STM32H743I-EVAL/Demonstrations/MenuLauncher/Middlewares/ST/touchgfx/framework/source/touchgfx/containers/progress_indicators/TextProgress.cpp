/**
  ******************************************************************************
  * This file is part of the TouchGFX 4.12.3 distribution.
  *
  * @attention
  *
  * Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

#include <touchgfx/containers/progress_indicators/TextProgress.hpp>

namespace touchgfx
{
TextProgress::TextProgress() :
    AbstractProgressIndicator(),
    textArea(),
    decimals(0)
{
    textBuffer[0] = 0;
    progressIndicatorContainer.add(textArea);
}

TextProgress::~TextProgress()
{
}

void TextProgress::setProgressIndicatorPosition(int16_t x, int16_t y, int16_t width, int16_t height)
{
    textArea.setPosition(0, 0, width, height);

    AbstractProgressIndicator::setProgressIndicatorPosition(x, y, width, height);
}

void TextProgress::setTypedText(const TypedText& t)
{
    textArea.setTypedText(t);
}

touchgfx::TypedText TextProgress::getTypedText() const
{
    return textArea.getTypedText();
}

void TextProgress::setColor(colortype color)
{
    textArea.setColor(color);
}

touchgfx::colortype TextProgress::getColor() const
{
    return textArea.getColor();
}

void TextProgress::setAlpha(uint8_t alpha)
{
    textArea.setAlpha(alpha);
}

uint8_t TextProgress::getAlpha() const
{
    return textArea.getAlpha();
}

void TextProgress::setValue(int value)
{
    AbstractProgressIndicator::setValue(value);
    int range[3] = { 1, 10, 100 };
    uint16_t progress = AbstractProgressIndicator::getProgress(100 * range[decimals]);
    if (decimals > 0)
    {
        Unicode::snprintf(textBuffer, 8, "%d.%0*d", progress / range[decimals], decimals, progress % range[decimals]);
    }
    else
    {
        Unicode::snprintf(textBuffer, 8, "%d", progress);
    }
    textArea.setWildcard(textBuffer);
    textArea.invalidate();
}

void TextProgress::setNumberOfDecimals(uint16_t numberOfDecimals)
{
    decimals = MIN(2, numberOfDecimals);
    setValue(getValue());
}

uint16_t TextProgress::getNumberOfDecimals() const
{
    return decimals;
}
}
