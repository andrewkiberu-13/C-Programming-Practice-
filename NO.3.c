#include <stdio.h>
#include <stdlib.h>

int main()
{

    //PAGE 180 EXERCISE 3.30 (a)
    int x, y;
    if (x > 10){
        if (y > 10)
            puts("*****");
        else
            puts("#####");
    }
    puts("$$$$$");



    //(b)

    if (x < 10){
        if (y > 10)
            puts("*****");
        }
        else {
            puts ("#####");
            puts ("$$$$$");
        }
    return 0;
}
