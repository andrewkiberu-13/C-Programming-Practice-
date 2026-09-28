#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int d;
    int isPrime;
    printf("Prime numbers from 1 to 100:\n");
    for (n = 2; n<=100; ++n) {
        isPrime = 1;

        for (d = 2; d < n; ++d){
            if (n % d == 0){
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) {
            printf("%d", n);
        }
        printf("n");








    return 0;

}
