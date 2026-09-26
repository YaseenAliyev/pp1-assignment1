#include <stdio.h>

int main(){
  double highestRain = 0; // highest rainfall in the US(inches)
  double currentRain = 0;
  
  printf("Write the highest ever rainfall in the us: ");
  scanf("%lf", &highestRain);
  
  printf("Write the rainfall for this year in the us: ");
  scanf("%lf", &currentRain);

  if(currentRain > highestRain){
    highestRain = currentRain;
  }
  printf("The Highest rainfall ever in the US is %.2lf inches\n", highestRain);

  return 0;
}
