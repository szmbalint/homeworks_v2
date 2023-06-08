#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"
#include <math.h>

int main()
{
    double x;
    double y;
    printf("elso szam: ");
    scanf("%lf",&x);
    printf("\nmasodik szam: ");
    scanf("%lf",&y);
    double result = pow(x,y); 
    printf("\n%lf",result);




    return 0;
}