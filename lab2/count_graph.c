#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int operationsAmount;

double firstProgram (int n) {
  double p = 1.0;

  operationsAmount++;
  for (int i = 1; i <= n; i++) {
    operationsAmount++;

    if (i > n) break;

    double sum = 0.0; operationsAmount++;

    operationsAmount++;
    for (int j = 1; j <= i; j++) {
      sum += j + sin(j); operationsAmount += 3;

      operationsAmount++;
    }
    p *= ((double)i * i + 1) / sum; operationsAmount += 4;

    operationsAmount++;
  }

  return p;
}

double secondProgram (int n) {
  double p = 1.0;
  double sum = 0.0;

  operationsAmount++;
  for (int i = 1; i++;) {
    operationsAmount++;
    if (i > n) break;

    sum += i + sin(i); operationsAmount += 3;
    p *= ((double)i * i + 1) / sum; operationsAmount += 4;

    operationsAmount++;
  }

  return p;
}

int main (void) {
  for (int n = 1; n <= 20; n++) {
    operationsAmount = 0;
    double firstProgramRes = firstProgram(n);
    int o1 = operationsAmount;

    operationsAmount = 0;
    double secondProgramRes = secondProgram(n);
    int o2 = operationsAmount;

    (void)firstProgramRes; (void)secondProgramRes;

    printf("n: %d\no1: %d, o2: %d\n", n, o1, o2);
  }

  return 0;
}