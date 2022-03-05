#include <stdio.h>

int main(void) { 

  int num1, num2;

  printf("Enter A value for num1 : ");
  scanf("%d",&num1);
  printf("Enter A value for num2 : ");
  scanf("%d",&num2);

  if( (num1 > 10) && (num2 < 10) ){
    
/*
    L R   Out
    T T   T
    T F   F
    F T   F
    F F   F

*  L - Left Condition
   R - Right Condition
   Out - Output 
   T - True
   F - False

*/   
    printf("\n (num1 > 10) & \n (num2 < 10)");
    
    
  }else{
    
    printf("\n (num1 < 10) or \n (num2 > 10) ");
    
  }
  
  return 0;
}