#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  int n;

  printf("Enter n: ");

  if (scanf("%d", &n) != 1 || n < 1) {
    printf("Number should be natural\n");

    return 1;
  }

  double p = 1.0;
  double sum = 0.0;

  for (int i = 0; i <= n; i++) {
    sum += i + sin(i);
    p *= ((double)i * i + 1) / sum;
  }

  printf("P: %f\n", p);

  return 0;
}