#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h>

int main(void){
  int min;
  int m;
  int h;

  printf("Enter the amount of minutes.\n");
  scanf("%d", &min);

  h=trunc(min/60);
	m=trunc((min-h*60));

  printf("The amount of time is %d",h);
  printf("h:");
  printf("%d",m);
  printf("m:");

  return 0;

}
