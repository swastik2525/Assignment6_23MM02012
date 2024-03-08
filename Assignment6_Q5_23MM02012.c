#include <stdio.h>
int main()
{
    int a[100][100], i, j, d, m, n;
    printf("enter the dimension(m*n) i.e enter m&n");
    scanf("%d%d", &m, &n);

    printf("enter the elements of a matrix");
    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("entered matrix:");
    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    printf("transpose of the matrix:\n");
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            printf("\t%d", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}