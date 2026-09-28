#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INPUT FROM PAGE 130, EXERCISE 2.4
    float x, y, z, product;
    printf("Enter three values:");
    scanf("%f, %f, %f", &x, &y, &z);

    //PROCESS
    product = x * y * z;

    //OUTPUT
    printf("The product of %.2f, %.2f and %.2f is %.2f", x,y,z, product);





    return 0;
}
