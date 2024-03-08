#include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("\nEnter the number of elements : ");
    scanf("%d", &n);

    printf("\nEnter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum = 0, avg, f = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    avg = sum / n;

    printf("\nElements greater than average are: ");
    for (i = 0; i < n; i++)
    {
        if (a[i] > avg)
        {
            printf("%d ", a[i]);
            f++;
        }
    }

    if (f == 0)
    {
        printf("\nNo element is greater than average.");
    }

    return 0;
}
