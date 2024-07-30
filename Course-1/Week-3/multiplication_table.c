#include <stdio.h>

int main ()
{
    int number_multiplied;
    int i;

    scanf("%d", &number_multiplied);
    for (i = 0; i <= 10; i++)
    {
        printf("%dx%d = %d\n", i, number_multiplied, number_multiplied * i);
    }
    return 0;
    
}