#include <stdio.h>

int main(){
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  printf("Enter three different integers: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  
  int sum = num1 + num2 + num3;
  int average = (num1 + num2 + num3)/3;
  int product  = num1 * num2 * num3;
  int biggest = 0;
  int smallest = 0;
  printf("Sum is %d\n", sum);
  printf("Average is %d\n", average);
  printf("Product is %d\n", product);
  
  if(num1 >= num2 && num1 >= num3){
    biggest = num1;
  }
  if(num2 >= num1 && num2 >= num3){
    biggest = num2;
  }
  if(num3 >= num1 && num3 >= num2){
    biggest = num3;
  }
  if(num1 <= num2 && num1 <= num3){
    smallest = num1;
  }
  if(num2 <= num1 && num2 <= num3){
    smallest = num2;
  }
  if(num3 <= num1 && num3 <= num2){
    smallest = num3;
  }
  printf("Smallest is %d\n", smallest);
  printf("Largest is %d\n", biggest);
  return 0;
}
