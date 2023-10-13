#include <stdio.h>
int primeNum(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter a Number to check :");
    scanf("%d", &num);
    if (primeNum(num))
    {
        printf(" \n Prime Number \n ");
    }
    else
    {
        printf(" \n Not a prime Number \n  ");
    }

    return 0;
}