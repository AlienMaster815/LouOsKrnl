#ifndef _GEOMETRY_H
#define _GEOMETRY_H
#include <LouAPI.h>
#include <assert.h>
void circle (int cx, int cy, int radius, uint8_t r,uint8_t g,uint8_t b);
void plot8points (int cx, int cy, int x, int y ,uint8_t r,uint8_t g,uint8_t b);
void plot4points (int cx, int cy, int x, int y ,uint8_t r,uint8_t g,uint8_t b);
void plot_basic_bezier (int x0, int y0, int x1, int y1, int x2, int y2,uint8_t r,uint8_t g,uint8_t b);
void plot_circle (int xm, int ym, int r,uint8_t R,uint8_t g,uint8_t b);
void plot_Line (int x0, int y0, int x1, int y1,uint8_t r,uint8_t g,uint8_t b);
void raster_circle (int x0, int y0, int radius,uint8_t r,uint8_t g,uint8_t b);

uint16_t GetScreenBufferWidth();
uint16_t GetScreenBufferHeight();

#endif