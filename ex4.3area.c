#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h>

  int main(void) {
    int w1=3;
    int h1=5;
    float w2=6.8;
    float h2=2.3;
    int p1;
    int a1;
    float p2;
    float a2;

    p1=2*(w1+h1);
    a1=w1*h1;
    p2=2*(w2+h2);
    a2=w2*h2;

    printf("The perimeter of the first rectangle is %d",p1);
    printf(" inches.\n");
    printf("The are of the first rectangle is %d",a1);
    printf(" square inches.\n");
    printf("The perimeter of the second rectangle is %f",p2);
    printf(" inches.\n");
    printf("The area of the second rectangle is %f",a2);
    printf(" square inches.\n");

    return 0;

  }
