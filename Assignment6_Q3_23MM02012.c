#include <stdio.h>

void reverse(int arr[], int start, int end)
{
    if (start < end)
    {

        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;

        start++;
        end--;
        reverse(arr, start, end);
    }
}

int main()
{

    int size;
    printf("Enter the size of array = ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {

        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
        printf("\t%d", arr[i]);
    printf("\n");

    reverse(arr, 0, size - 1);

    printf("reversed array:");
    for (int i = 0; i < size; i++)
        printf("\t%d", arr[i]);

    return 0;
}
