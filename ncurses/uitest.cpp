#include <stdio.h>
#include <ncurses.h>

int main () {
  initscr();
  
  refresh();

  endwin();
  
  return 0;

}
