#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int n;

  printf("Enter n: ");
  if (scanf("%d", &n) != 1 || n < 1) {
    printf("Number should be natural\n");

    return 1;
  }

  double p = 1.0;

  for (int i = 1; i <= n; i++) {
    double sum = 0.0;

    for (int j = 1; j <= i; j++) {
      sum += j + sin(j);
    }
    p *= ((double)i * i + 1) / sum;
  }

  printf("P: %f\n", p);

  return 0;
}