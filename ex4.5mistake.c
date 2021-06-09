#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h>

int main(void) {
  float a;
  float b;
  int c;

  printf ("Enter a number with decimals.\n");
  scanf  ("%f",&a);
  printf ("Enter an integer number.\n");
  scanf  ("%f",&b);
  printf ("Enter any character.\n");
  scanf  ("%d",&c);
  printf ("Your result is %f\n",a);
  printf ("Your result is %f\n",b);
  printf ("Your result is %d\n",c);

  return 0;

}
