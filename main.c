#include <stdio.h>

int main(void) {
  int number1;
  float number2;
  double number3;
  char character;

  printf("Input Value For number1 = ");
  scanf("%d",&number1);

  printf("Input Value For number2 = ");
  scanf("%f",&number2);

  printf("Input Value For number3 = ");
  scanf("%f",&number3);

  printf("Input Value For character = ");
  scanf("% c",&character);

  printf("\v%d - %f - %f - % c ", number1, number2, number3, 'character');
  
  
  return 0;
}