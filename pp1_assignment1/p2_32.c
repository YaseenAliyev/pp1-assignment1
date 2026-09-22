#include <stdio.h>

int main(){
  printf("BMI Calculator\n");
  double BMI = 0;
  double weight = 0;
  double height = 0;

  printf("Enter you weight: ");
  scanf("%lf", &weight);


  printf("Enter you height: ");
  scanf("%lf", &height);

  BMI = weight / (height * height);

  printf("%lf\n", BMI);

  if(BMI < 18.5){
    printf("Underweight\n");
  }else if(BMI >= 18.5 && BMI <= 24.9){
    printf("Normal\n");
  }else if(BMI >= 25 && BMI <= 29.9){
    printf("Overweight\n");
  }else if(BMI >= 30){
    printf("Obese\n");
  }
  return 0;
}
