#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h>

int main(void){
  float rad;
  float pi;
  pi=3.14159265359;

  printf("Enter the radius of the sphere to calculate its volume.\n");
  scanf("%f",&rad);

  rad=4*pi*rad*rad*rad*0.33333;

  printf("The volume of the sphere is %.3f",rad);
  printf(" cubic units.");

  return 0;

}
