#include "correction.h"

coord  move(coord pos, char direction);

void  show_test(coord before, coord now, int x, int y)
{
  printf("\n\x1B[1mYour answer:\x1B[0m\n\n");
  for (int i = 0; i <= y; i++)
    {
      for (int j = 0; j <= x; j++)
        {
          if (i == before.y && j == before.x)
            printf("\x1B[46m  \x1B[0m");
          else if (i == now.y && j == now.x)
            printf("\x1B[44m  \x1B[0m");
          else
            printf("\x1B[47m  \x1B[0m");
        }
      printf("\n");
    }
  printf("\n\n");
  printf("\x1B[46m  \x1B[0m : before\n");
  printf("\x1B[44m  \x1B[0m : now\n\n");
}

int  do_test(coord pos, char dir, int num)
{
  coord answer = move(pos, dir);
  coord to_test = ft_move(pos, dir); // ft_move
  if (answer.x == to_test.x && answer.y == to_test.y)
  {
    printf("\n\x1B[32m\x1B[1mTest %d Ok\x1B[0m\n", num);
    return 1;
  }
  else
  {
    printf("\x1B[31mError: expected pos(%d,%d) -> actual pos(%d,%d)\x1B[0m\n", answer.x, answer.y, to_test.x, to_test.y);
    return 0;
  }
}

void  test()
{
  int  num = 0;
  coord  pos;
  pos.x = 1;
  pos.y = 1;

  num += do_test(pos, 'e', 1);
  if (num == 1)
    show_test(pos, move(pos, 'e'), 4, 3);

  pos.x = 2;
  pos.y = 3;
  num += do_test(pos, 'n', 2);
  if (num == 2)
    show_test(pos, move(pos, 'n'), 4, 3);

  pos.x = 3;
  pos.y = 1;
  num += do_test(pos, 'w', 3);
  if (num == 3)
  {
    show_test(pos, move(pos, 'w'), 4, 3);
    printf("\n\x1B[32m\x1B[1mAll test passed\x1B[0m\n\n");
  }
}

//to do
coord  move(coord pos, char direction)
{
  if (direction == 'n')
    pos.y--;
  else if (direction == 's')
    pos.y++;
  else if (direction == 'e')
    pos.x++;
  else if (direction == 'w')
    pos.x--;
  return pos;
}
