/*
 * Viết một hàm nhập mảng tên NhapMang(), một hàm sắp xếp mảng tên SxMang(), một hàm in các phần tử của mảng ra màn hình tên InMang()
 * Hàm main sử dụng các hàm này để nhập mảng n phần tử và in mảng ra màn hình trước và sau khi sắp xếp.
 */

#include <stdio.h>
#include <stdlib.h>

void NhapMang(int *arr, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
}

void SxMang(int *arr, int n)
{
    int i = 0, j = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(arr + j) < *(arr + i))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + i);
                *(arr + i) = temp;
            }
        }
    }
}

void InMang(int *arr, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    int n = 0;
    scanf("%d", &n);
    int *arr = NULL;
    arr = (int *)malloc(n * sizeof(int));
    if (arr != NULL)
    {
        NhapMang(arr, n);
        InMang(arr, n);
        SxMang(arr, n);
        InMang(arr, n);
        free(arr);
    }
    else
    {
        exit(0);
    }
    return 0;
}