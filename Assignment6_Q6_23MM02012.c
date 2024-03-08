#include <stdio.h>
int main()
{
    float a[100][7];
    int i, j, n;
    printf("enter number of cities");
    scanf("%d", &n);
    printf("enter the temperatures of 7 days of the cities one by one");
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < 7; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    float sum = 0, avg;
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < 7; j++)
        {
            sum += a[i][j];
        }
        avg = sum / 7.0;
        printf(" %.2f", avg);
        sum = 0;
    }

    return 0;
}
