// Cho một mảng số nguyên a gồm N phần tử. Tìm và in ra phần tử nhỏ nhất và lớn nhất trong mảng đó

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n = 0;
    scanf("%d", &n);
    int *arr = NULL;
    arr = (int *)malloc(n * sizeof(int));
    if (arr != NULL)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int max = arr[0], min = arr[0];
        for (i = 1; i < n; i++)
        {
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
        printf("%d %d\n", min, max);
        free(arr);
    }
    else
    {
        exit(0);
    }
    return 0;
}