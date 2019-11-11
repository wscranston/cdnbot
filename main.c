#include <stdio.h>

int main()
{
  printf("Hello, world\n");
  waitForButtonPush(0);
  if (switchState(1) == 1)
  {
    doMaze();
  }
  else
  {
    doSumo();
  }
}
