#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h>
#define pi 3.14159265359

int main(void){
  float rad;

  printf("Enter the radius of the sphere to calculate its volume.\n");
  scanf("%f",&rad);

  rad=4*pi*rad*rad*rad*0.33333;

  printf("The volume of the sphere is %.3f",rad);
  printf(" cubic units.");

  return 0;

}
