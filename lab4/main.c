#include <stdio.h>

#define M 7
#define N 10

int main(void) {
  double matrix[M][N] = {
    {15, 30, 7.5, 50, 11, 18, 25, 9, 21, 14},
    {12, 22, 6, 40, 11, 13, 16, 8, 17, 9},
    {9, 14, 6, 30, 11, 9, 12, 4.5, 10, 5},
    {9, 8, 3, 20, 5, 7, 6, 4.5, 10, 5},
    {4, 8, 0, 10, 2, 7, 1, 0, 3, 5},
    {-2, 8, -3, 0, -1, 3, -5, -6, 3, -3},
    {-8, 1, -9, -10, -4, 2, -5, -12, -7, -11}
  };

  double x;
  printf("Enter x: ");
  scanf("%lf", &x);

  for (int col = 0; col < N; col ++) {
    int left = 0;
    int right = M - 1;

    while (left < right) {
      int middle = (left + right) / 2;

      if (matrix[middle][col] > x) {
        left = middle + 1;
      } else {
        right = middle;
      }
    }

    if (matrix[left][col] == x) {
      printf("A[%d][%d] = %g\n", left + 1, col + 1, matrix[left][col]);
    } else {
      printf("Not found in column %d\n", col + 1);
    }
  }

  return 0;
}