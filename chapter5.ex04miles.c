#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h>

int main(void){
  float kilo;
  float miles;

  printf("Enter speed in kilometers per hour.\n");
  scanf("%f", &kilo);

  miles=kilo*0.6213712;

  printf("The speed is %.4f",miles);
  printf(" miles per hour.");

  return 0;

}
