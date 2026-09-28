#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    int value;
    int sum = 0;
    double average;

    printf("Enter the number of integers to sum:");
    scanf("%d", &count);

    for (int i = 1; i <= count; ++i){
        printf("Enter integer %d:", i);
        scanf("%d", &value);
        sum += value;
    }
        average = sum / count;










    return 0;
}
