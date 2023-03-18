#ifndef __CORRECTION__H__
#define __CORRECTION__H__

#include <unistd.h>
#include <stdio.h>

typedef struct Coord {
  int x;
  int y;
}  coord;

coord  ft_move(coord pos, char direction);
void  test();

#endif