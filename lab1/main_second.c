#include <stdio.h>
#include <stdlib.h>

int main(void) {  
  double x;  
  double result = 0.0;  

  printf("Print x: ");  
  scanf("%lf", &x);  

  if (x > 0 && x <= 5) {  
    result = x * 3 - 5 * x * 2;
    printf("%f\n", result);
  } else if (x >= -32 && x < -20) {  
    result = x * 2 - 3;  
    printf("%f\n", result);
  } else if (x > 10) {  
    result = x * 2 - 3;  
    printf("%f\n", result);
  } else {
    printf("No existing function for this number\n");
  }

  printf("Current x: %f\n", x);

  return 0; 
}