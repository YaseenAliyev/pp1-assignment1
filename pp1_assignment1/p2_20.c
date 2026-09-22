#include <stdio.h>

int main(){
  int user = 0;
  int secondsPassed = 0;
  int minutesPassed = 0;
  int hoursPassed = 0;

  printf("Write the total time elapsed in seconds: ");
  scanf("%d", &user);
  hoursPassed = user / 3600;
  minutesPassed = (user - hoursPassed* 3600) / 60;
  secondsPassed = user - hoursPassed * 3600 - minutesPassed * 60;
  printf("%02d:%02d:%02d\n", hoursPassed, minutesPassed, secondsPassed);
  return 0;
}
