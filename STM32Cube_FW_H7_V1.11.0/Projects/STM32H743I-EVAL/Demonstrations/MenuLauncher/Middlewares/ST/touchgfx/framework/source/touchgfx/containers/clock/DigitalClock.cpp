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

#include <touchgfx/containers/clock/DigitalClock.hpp>

namespace touchgfx
{
DigitalClock::DigitalClock() :
    AbstractClock(),
    displayMode(DISPLAY_24_HOUR),
    useLeadingZeroForHourIndicator(false)
{
    buffer[0] = '\0';
    text.setXY(0, 0);
    text.setWildcard(buffer);
    Container::add(text);
}

DigitalClock::~DigitalClock()
{
}

void DigitalClock::setWidth(int16_t width)
{
    Container::setWidth(width);
    text.setWidth(width);
}

void DigitalClock::setHeight(int16_t height)
{
    Container::setHeight(height);
    text.setHeight(height);
}

void DigitalClock::setBaselineY(int16_t baselineY)
{
    if (text.getTypedText().hasValidId())
    {
        moveTo(getX(), baselineY - text.getTypedText().getFont()->getFontHeight());
    }
}

void DigitalClock::displayLeadingZeroForHourIndicator(bool displayLeadingZero)
{
    useLeadingZeroForHourIndicator = displayLeadingZero;
}

void DigitalClock::setAlpha(uint8_t alpha)
{
    text.setAlpha(alpha);
}

uint8_t DigitalClock::getAlpha() const
{
    return text.getAlpha();
}

void DigitalClock::setTypedText(TypedText typedText)
{
    text.setTypedText(typedText);
    text.invalidate();
}

void DigitalClock::setColor(colortype color)
{
    text.setColor(color);
    text.invalidate();
}

void DigitalClock::updateClock()
{
    if (displayMode == DISPLAY_12_HOUR_NO_SECONDS)
    {
        const char* format = useLeadingZeroForHourIndicator ? "%02d:%02d %cM" : "%d:%02d %cM";
        Unicode::snprintf(buffer, BUFFER_SIZE, format, ((currentHour + 11) % 12) + 1, currentMinute, currentHour < 12 ? 'A' : 'P');
    }
    else if (displayMode == DISPLAY_24_HOUR_NO_SECONDS)
    {
        const char* format = useLeadingZeroForHourIndicator ? "%02d:%02d" : "%d:%02d";
        Unicode::snprintf(buffer, BUFFER_SIZE, format, currentHour, currentMinute);
    }
    else if (displayMode == DISPLAY_12_HOUR)
    {
        const char* format = useLeadingZeroForHourIndicator ? "%02d:%02d:%02d %cM" : "%d:%02d:%02d %cM";
        Unicode::snprintf(buffer, BUFFER_SIZE, format, ((currentHour + 11) % 12) + 1, currentMinute, currentSecond, currentHour < 12 ? 'A' : 'P');
    }
    else if (displayMode == DISPLAY_24_HOUR)
    {
        const char* format = useLeadingZeroForHourIndicator ? "%02d:%02d:%02d" : "%d:%02d:%02d";
        Unicode::snprintf(buffer, BUFFER_SIZE, format, currentHour, currentMinute, currentSecond);
    }
    text.invalidate();
}
}
