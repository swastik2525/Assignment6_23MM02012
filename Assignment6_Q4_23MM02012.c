#include <stdio.h>
void main()
{
    int m, n;
    printf("\nEnter the size of v1[m] = ");
    scanf("%d", &m);
    printf("\nEnter the size of v2[n] = ");
    scanf("%d", &n);
    int v1[m], v2[n];

    printf("enter v1");
    for (int i = 0; i < m; i++)
    {

        scanf("%d", &v1[i]);
    }

    printf("enter v2");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &v2[i]);
    }

    if (m >= n)
    {
        int c = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (v2[i] == v1[j])
                    c++;
        if (c == n)
            printf("\nv2 is subarray of v1");
        else
            printf("\nv2 is not a subarray of v1");
    }

    else
    {
        int count = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (v1[i] == v2[j])
                    count++;
        if (count == m)
            printf("\nv1 is subarray of v2");
        else
            printf("\nv1 is not a subarray of v2");
    }
}
