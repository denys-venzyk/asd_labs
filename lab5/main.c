#include <stdio.h>

#define M 7
#define N 10

void sortRows(int matrix[M][N]) {
  for (int row = 0; row < M; row++) {
    for (int i = 1; i < N; i++) {
      int keyElement = matrix[row][i];
      int leftElement = i - 1;

      while (leftElement >= 0 && matrix[row][leftElement] < keyElement) {
        matrix[row][leftElement + 1] = matrix[row][leftElement];
        leftElement--;
      }

      matrix[row][leftElement + 1] = keyElement;
    }
  }
}

void printMatrix(int matrix[M][N]) {
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      printf("%4d", matrix[i][j]);
    }
    printf("\n");
  }
}

void testSorting(int matrix[M][N]) {
  printf("Before sorting:\n");
  printMatrix(matrix);
  sortRows(matrix);
  printf("After sorting:\n");
  printMatrix(matrix);
}

int main(void) {
  int sorted[M][N], reversed[M][N], random[M][N] = {
    {5, -3, 12, 0, 7, 44, -8, 3, 3, -2},
    {17, 1, -6, 9, -4, 8, 33, -1, 0, 14},
    {-9, 22, 5, 11, -7, 3, 2, 6, -3, 50},
    {4, -1, 0, 27, 8, -5, 9, 1, 2, -10},
    {13, 6, -2, 4, 15, -9, 0, 12, 7, -1},
    {-4, 3, 18, -8, 2, 10, -6, 5, 22, -15},
    {9, -7, 14, 1, -3, 25, 4, 0, -2, 11}
  };

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      sorted[i][j] = 100 - 10 * j - i;
      reversed[i][j] = 10 * j + i - 50;
    }
  }

  testSorting(sorted);
  testSorting(reversed);
  testSorting(random);

  return 0;
}