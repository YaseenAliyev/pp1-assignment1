#include <stdio.h>

int main(){
  printf("number\n");
  for(int num = 0; num < 11; num++){
    printf("%d\n", num);
  }
  printf("square\n");
  for(int num = 0; num<11; num++){
    printf("%d\n", num*num);
  }
  printf("cube\n");
  for(int num = 0; num<11; num++){
    printf("%d\n", num*num*num);
  }

  return 0;
}
