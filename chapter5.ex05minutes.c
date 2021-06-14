#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h>

int main(void){
  int h;
  int m;
  int min;

  printf("Enter the amount of hours.\n");
  scanf("%d", &h);
  printf("Enter the amount of minutes.\n");
  scanf("%d", &m);

  min=h*60+m;

  printf("The amount of time is %d",min);
  printf(" minutes.");

  return 0;

}
