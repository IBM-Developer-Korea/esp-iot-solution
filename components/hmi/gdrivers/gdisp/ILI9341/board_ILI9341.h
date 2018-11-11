/*
 * This file is subject to the terms of the GFX License. If a copy of
 * the license was not distributed with this file, you can obtain one at:
 *
 *              http://ugfx.org/license.html
 */

#ifndef _GDISP_LLD_BOARD_H
#define _GDISP_LLD_BOARD_H

/* uGFX Config Includes */
#include "sdkconfig.h"

#if CONFIG_UGFX_LCD_DRIVER_API_MODE

/* uGFX Includes */
#include "gos_freertos_priv.h"
#include "gfx.h"

/* Disp Includes */
#include "lcd_adapter.h"
#include "ILI9341.h"

// Static inline functions
static GFXINLINE void init_board(GDisplay *g)
{
    board_lcd_init();
}

static GFXINLINE void post_init_board(GDisplay *g)
{
    (void) g;
}

static GFXINLINE void setpin_reset(GDisplay *g, bool_t state)
{
    (void) g;
    (void) state;
}

static GFXINLINE void set_backlight(GDisplay *g, uint8_t percent)
{
    (void) g;
    (void) percent;
}

static GFXINLINE void acquire_bus(GDisplay *g)
{
    (void) g;
}

static GFXINLINE void release_bus(GDisplay *g)
{
    (void) g;
}

static GFXINLINE void write_index(GDisplay *g, uint16_t index)
{
    board_lcd_write_cmd(index);
}

static GFXINLINE void write_data(GDisplay *g, uint16_t data)
{
    board_lcd_write_data(data);
}

static GFXINLINE void write_data_byte_repeat(GDisplay *g, uint16_t data, int point_num)
{
    board_lcd_write_data_byte_repeat(data, point_num);
}

static GFXINLINE void write_cmddata(GDisplay *g, uint8_t cmd, uint32_t data)
{
    board_lcd_write_cmddata(cmd, data);
}

static GFXINLINE void setreadmode(GDisplay *g)
{
    (void) g;
}

static GFXINLINE void setwritemode(GDisplay *g)
{
    (void) g;
}

static GFXINLINE uint16_t read_data(GDisplay *g)
{
    (void) g;
    return 0;
}

#endif /* _GDISP_LLD_BOARD_H */

#endif /* CONFIG_UGFX_LCD_DRIVER_API_MODE */
