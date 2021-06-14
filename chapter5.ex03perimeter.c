#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h> 

int main(void){
  float h;
  float w;
  float per;

  printf("Enter the height of the rectangle.\n");
  scanf("%f",&h);
  printf("Enter the width of the rectangle.\n");
  scanf("%f",&w);

  per=2*(h+w);

  printf("The perimeter of the rectangle is equal to %.2f",per);
  printf(" units.");

  return 0;

}
