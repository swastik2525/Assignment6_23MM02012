#include <stdio.h>

int prime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int ll, ul;
    printf("lower limit: ");
    scanf("%d", &ll);
    printf("upper limit: ");
    scanf("%d", &ul);
    printf("Prime numbers between %d and %d are: ", ll, ul);
    for (int j = ll; j <= ul; j++)
    {

        if (prime(j) && j > 1)
        {
            printf("%d ", j);
        }
    }
    printf("\n");
    return 0;
}
