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

#ifndef PAINTERARGB8888_HPP
#define PAINTERARGB8888_HPP

#include <stdint.h>
#include <touchgfx/widgets/canvas/AbstractPainterARGB8888.hpp>
#include <touchgfx/hal/Types.hpp>

namespace touchgfx
{
/**
 * @class PainterARGB8888 PainterARGB8888.hpp touchgfx/widgets/canvas/PainterARGB8888.hpp
 *
 * @brief A Painter that will paint using a color and an alpha value.
 *
 *        The PainterARGB8888 class allows a shape to be filled with a given color and alpha
 *        value. This allows transparent, anti-aliased elements to be drawn.
 *
 * @see AbstractPainter
 */
class PainterARGB8888 : public AbstractPainterARGB8888
{
public:

    /**
     * @fn PainterARGB8888::PainterARGB8888(colortype color = 0, uint8_t alpha = 255);
     *
     * @brief Constructor.
     *
     *        Constructor.
     *
     * @param color the color.
     * @param alpha the alpha.
     */
    PainterARGB8888(colortype color = 0, uint8_t alpha = 255);

    /**
     * @fn void PainterARGB8888::setColor(colortype color, uint8_t alpha = 255);
     *
     * @brief Sets color and alpha to use when drawing the CanvasWidget.
     *
     *        Sets color and alpha to use when drawing the CanvasWidget.
     *
     * @param color The color.
     * @param alpha The alpha.
     */
    void setColor(colortype color, uint8_t alpha = 255);

    /**
     * @fn colortype PainterARGB8888::getColor() const;
     *
     * @brief Gets the current color.
     *
     *        Gets the current color.
     *
     * @return The color.
     */
    colortype getColor() const;

    /**
     * @fn void PainterARGB8888::setAlpha(uint8_t alpha);
     *
     * @brief Sets an alpha value for the painter.
     *
     *        Sets an alpha value for the painter.
     *
     * @param alpha The alpha value to use.
     */
    void setAlpha(uint8_t alpha);

    /**
     * @fn uint8_t PainterARGB8888::getAlpha() const;
     *
     * @brief Gets the current alpha value.
     *
     *        Gets the current alpha value.
     *
     * @return The current alpha value.
     *
     * @see setAlpha
     */
    uint8_t getAlpha() const;

    virtual void render(uint8_t* ptr, int x, int xAdjust, int y, unsigned count, const uint8_t* covers);

protected:
    virtual bool renderNext(uint8_t& red, uint8_t& green, uint8_t& blue, uint8_t& alpha);

    uint8_t painterRed;   ///< The red part of the color
    uint8_t painterGreen; ///< The green part of the color
    uint8_t painterBlue;  ///< The blue part of the color
    uint8_t painterAlpha; ///< The alpha value
}; // class PainterARGB8888
} // namespace touchgfx

#endif // PAINTERARGB8888_HPP
