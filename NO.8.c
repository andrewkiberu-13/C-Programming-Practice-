#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sales;
    double salary;

    printf("Enter sales in dollars (-1 to end):");

    while (sales !=-1){
        salary = 200 + 0.09 * sales;
        printf("Salary is :$%.2f\n\n", salary);

        printf("Enter sales in dollars (-1 to end:");
        scanf ("%1f", &sales);


    }















return 0;
}
