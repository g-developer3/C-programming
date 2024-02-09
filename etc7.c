#include <stdio.h>

int table(int arr[][10], int n, int number)
{
    for (int i = 0; i < 10; i++)
    {
        arr[n][i] = number * (i + 1);
    }
}

int main()
{
    int n, number;
    int arr[2][10];
    table(arr, 0, 2);
    table(arr, 1, 3);
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", arr[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", arr[1][i]);
    }

    return 0;
}