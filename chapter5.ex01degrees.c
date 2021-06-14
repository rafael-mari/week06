#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h>

int main(void){
  float cent;
  float fahr;

  printf("Enter the amount of degrees Centigrade.\n");
  scanf("%f", &cent);

  fahr=9*cent/5+32;

  printf("There are %.1f",fahr);
  printf("° degrees Fahrenheit.");

}
