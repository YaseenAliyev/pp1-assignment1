#include <stdio.h>

int main(){
  double highestRain = 704; // highest rainfall in the US(inches)
  double currentRain = 0;

  printf("Write the rainfall for this year in the US: ");
  scanf("%lf", &currentRain);

  if(currentRain > highestRain){
    highestRain = currentRain;
  }
  printf("The Highest rainfall ever in the US is %.2lf inches\n", highestRain);

  return 0;
}
