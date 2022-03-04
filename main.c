#include <stdio.h>

int main(void) {

  int num1, num2, sum;

  printf("Enter Num1 Value = ");
  scanf("%d",&num1);
  
  printf("Enter Num2 Value = ");
  scanf("%d",&num2);
  

  sum = num1 + num2;
  printf("\nSum Value of num1 and num2 is = %d",sum);

  return 0;
}