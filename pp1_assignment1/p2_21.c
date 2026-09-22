#include <stdio.h>

int main(){
  int start = 0;
  int stop = 0;
  printf("Enter the size of the rectangle: ");
  scanf("%d", &stop);
  for(int i = start; i < stop; i++){
    if(i == start || i == stop-1){
      printf("********\n");
    }else{
    printf("*      *\n");
    }
  }

  puts("");
  
  printf("Enter the size of the circle: ");
  scanf("%d", &stop);
  printf("  ***  \n");
  printf(" *   * \n");
  for(int i = start; i < stop; i++){
    printf("*     *\n");
  }
  printf(" *   * \n");
  printf("  ***  \n");

  puts("");

  printf("Enter the size of the arrow: ");
  scanf("%d", &stop);

  printf("  * \n");
  printf(" ***\n");
  printf("*****\n");
  for(int i = 0; i < stop; i++){
    printf("  *\n");
  }

  puts("");
  
  printf("    *    \n");
  printf("   * *   \n");
  printf("  *   *  \n");
  printf(" *     * \n");
  printf("*       *\n");
  printf(" *     * \n");
  printf("  *   *  \n");
  printf("   * *   \n");
  printf("    *    \n");

  return 0;
}
