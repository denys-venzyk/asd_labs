#include <stdio.h>
#include <unistd.h>

#define ROW 24
#define COL 80
#define DELAY 10000

void printingXY(int row, int col, char ch) {
  printf("\033[%d;%dH", row + 1, col + 1);
  putchar(ch);
  fflush(stdout);
}

int main() {
  int k;
  int r, column;
  int row_min, row_max;

  printf("\033[2J");

  for (k = ROW + COL - 2; k >= 0; k--) {
      row_min = 0;

      if (k - (COL - 1) > 0) {
          row_min = k - (COL - 1);
      }

      row_max = ROW - 1;

      if (k < ROW - 1) {
          row_max = k;
      }

      if (k % 2 == 1) {
          for (r = row_max; r >= row_min; r--) {
              column = k - r;
              printingXY(r, column, '*');
              usleep(DELAY);
          }
      } else {
          for (r = row_min; r <= row_max; r++) {
              column = k - r;
              printingXY(r, column, '*');
              usleep(DELAY);
          }
      }
  }
  printf("\033[%d;1H", ROW + 1);

  return 0;
}