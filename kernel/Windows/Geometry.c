#include <LouApi.h>
// 'cx' and 'cy' denote the offset of the circle centre from the origin.
void
circle (int cx, int cy, int radius,uint8_t r,uint8_t g,uint8_t b)
{
  int error = -radius;
  int x = radius;
  int y = 0;
 
  // The following while loop may altered to 'while (x > y)' for a
  // performance benefit, as long as a call to 'plot4points' follows
  // the body of the loop. This allows for the elimination of the
  // '(x != y') test in 'plot8points', providing a further benefit.
  //
  // For the sake of clarity, this is not shown here.
  while (x >= y)
  {
    plot8points (cx, cy, x, y,r,g,b);
    error += y;
    ++y;
    error += y;
    // The following test may be implemented in assembly language in
    // most machines by testing the carry flag after adding 'y' to
    // the value of 'error' in the previous step, since 'error'
    // nominally has a negative value.
    if (error >= 0)
    {
      --x;
      error -= x;
      error -= x;
    }
  }
}


void
plot8points (int cx, int cy, int x, int y, uint8_t r,uint8_t g, uint8_t b)
{
  plot4points (cx, cy, x, y,r,g,b);
  if (x != y) plot4points (cx, cy, y, x,r,g,b);
}
 
// The '(x != 0 && y != 0)' test in the last line of this function
// may be omitted for a performance benefit if the radius of the
// circle is known to be non-zero.
void
plot4points (int cx, int cy, int x, int y, uint8_t r, uint8_t g, uint8_t b)
{
  VgaPutPixelRgb(cx + x, cy + y,r,g,b);
  if (x != 0) VgaPutPixelRgb (cx - x, cy + y,r,g,b);
  if (y != 0) VgaPutPixelRgb (cx + x, cy - y ,r,g,b);
  if (x != 0 && y != 0) VgaPutPixelRgb (cx - x, cy - y,r,g,b);
}

void
plot_basic_bezier (int x0, int y0, int x1, int y1, int x2, int y2,uint8_t r,uint8_t g,uint8_t b)
{                            
  int sx = x0 < x2 ? 1 : -1;
  int sy = y0 < y2 ? 1 : -1; /* step direction */
  int cur = sx * sy *((x0 - x1) * (y2 - y1) - (x2 - x1) * (y0 - y1)); /* curvature */
  int x = x0 - 2 * x1 + x2, y = y0 - 2 * y1 +y2, xy = 2 * x * y * sx * sy;
                                /* compute error increments of P0 */
  long dx = (1 - 2 * abs (x0 - x1)) * y * y + abs (y0 - y1) * xy - 2 * cur * abs (y0 - y2);
  long dy = (1 - 2 * abs (y0 - y1)) * x * x + abs (x0 - x1) * xy + 2 * cur * abs (x0 - x2);
                                /* compute error increments of P2 */
  long ex = (1 - 2 * abs (x2 - x1)) * y * y + abs (y2 - y1) * xy + 2 * cur * abs (y0 - y2);
  long ey = (1 - 2 * abs (y2 - y1)) * x * x + abs (x2 - x1) * xy - 2 * cur * abs (x0 - x2);
                              /* sign of gradient must not change */
  if (cur == 0)
  { /* straight line */
    plot_Line (x0, y0, x2, y2,r,g,b);
    return;
  }
  x *= 2 * x;
  y *= 2 * y;
  if (cur < 0)
  { /* negated curvature */
    x = -x;
    dx = -dx;
    ex = -ex;
    xy = -xy;
    y = -y;
    dy = -dy;
    ey = -ey;
  }
  /* algorithm fails for almost straight line, check error values */
  if (dx >= -y || dy <= -x || ex <= -y || ey >= -x)
  {        
    plot_Line (x0, y0, x1, y1,r,g,b); /* simple approximation */
    plot_Line (x1, y1, x2, y2,r,g,b);
    return;
  }
  dx -= xy;
  ex = dx + dy;
  dy -= xy; /* error of 1.step */
  for (;;)
  { /* plot curve */
    VgaPutPixelRgb(x0, y0,r,g,b);
    ey = 2 * ex - dy; /* save value for test of y step */
    if (2 * ex >= dx)
    { /* x step */
      if (x0 == x2) break;
      x0 += sx;
      dy -= xy;
      ex += dx += y; 
    }
    if (ey <= 0)
    { /* y step */
      if (y0 == y2) break;
      y0 += sy;
      dx -= xy;
      ex += dy += x; 
    }
  }
}  

void
plot_circle (int xm, int ym, int r,uint8_t R,uint8_t g,uint8_t b)
{
   int x = -r, y = 0, err = 2-2*r; /* II. Quadrant */ 
   do {
      VgaPutPixelRgb (xm-x, ym+y,R,g,b); /*   I. Quadrant */
      VgaPutPixelRgb (xm-y, ym-x,R,g,b); /*  II. Quadrant */
      VgaPutPixelRgb (xm+x, ym-y,R,g,b); /* III. Quadrant */
      VgaPutPixelRgb (xm+y, ym+x,R,g,b); /*  IV. Quadrant */
      r = err;
      if (r >  x) err += ++x*2+1; /* e_xy+e_x > 0 */
      if (r <= y) err += ++y*2+1; /* e_xy+e_y < 0 */
   } while (x < 0);
}

void
plot_Line (int x0, int y0, int x1, int y1,uint8_t r,uint8_t g,uint8_t b)
{
  int dx =  abs(x1 - x0), sx = x0 < x1 ? 1 : -1;
  int dy = -abs(y1 - y0), sy = y0 < y1 ? 1 : -1; 
  int err = dx + dy, e2; /* error value e_xy */
 
  for (;;){  /* loop */
    VgaPutPixelRgb(x0,y0,r,g,b);
    if (x0 == x1 && y0 == y1) break;
    e2 = 2 * err;
    if (e2 >= dy) { err += dy; x0 += sx; } /* e_xy+e_x > 0 */
    if (e2 <= dx) { err += dx; y0 += sy; } /* e_xy+e_y < 0 */
  }
}

void
raster_circle (int x0, int y0, int radius,uint8_t r,uint8_t g,uint8_t b)
{
  int f = 1 - radius;
  int ddF_x = 1;
  int ddF_y = -2 * radius;
  int x = 0;
  int y = radius;
 
  VgaPutPixelRgb (x0, y0 + radius,r,g,b);
  VgaPutPixelRgb (x0, y0 - radius,r,g,b);
  VgaPutPixelRgb (x0 + radius, y0,r,g,b);
  VgaPutPixelRgb (x0 - radius, y0,r,g,b);
  while (x < y)
  {
    // ddF_x == 2 * x + 1;
    // ddF_y == -2 * y;
    // f == x*x + y*y - radius*radius + 2*x - y + 1;
    if (f >= 0) 
    {
      y--;
      ddF_y += 2;
      f += ddF_y;
    }
    x++;
    ddF_x += 2;
    f += ddF_x;    
    VgaPutPixelRgb (x0 + x, y0 + y,r,g,b);
    VgaPutPixelRgb (x0 - x, y0 + y,r,g,b);
    VgaPutPixelRgb (x0 + x, y0 - y,r,g,b);
    VgaPutPixelRgb (x0 - x, y0 - y,r,g,b);
    VgaPutPixelRgb (x0 + y, y0 + x,r,g,b);
    VgaPutPixelRgb (x0 - y, y0 + x,r,g,b);
    VgaPutPixelRgb (x0 + y, y0 - x,r,g,b);
    VgaPutPixelRgb (x0 - y, y0 - x,r,g,b);
  }
}

uint16_t VgaGetBufferHeight();
uint16_t VgaGetBufferWidth();

uint16_t GetBufferWidth(){
  return VgaGetBufferWidth();
}

uint16_t GetBufferHeight(){
  return VgaGetBufferHeight();
}