#include <stdio.h>

int main(){
  printf("number\tsquare\tcube\n");
  for(int num = 0; num < 11; num++){
    printf("%d\t%d\t%d\n", num, num*num, num*num*num);
  }
  return 0;
}
