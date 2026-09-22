#include <stdio.h>

int main(){
  int num1;
  int num2;
  
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);

  if(num2 % num1 == 0){
    printf("%d is a multiple of %d by %d\n", num2, num1, num2 / num1);
  }
  return 0;
}
