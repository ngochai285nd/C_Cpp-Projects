/*
 * Viết một hàm nhập mảng tên NhapMang(), một hàm sắp xếp mảng tên SxMang(), một hàm in các phần tử của mảng ra màn hình tên InMang()
 * Hàm main sử dụng các hàm này để nhập mảng n phần tử và in mảng ra màn hình trước và sau khi sắp xếp.
 */

#include <iostream>

using namespace std;

void NhapMang(int *, int);
void SxMang(int *, int);
void InMang(int *, int);

int main(int argc, char *argv[])
{
    int n = 0;
    cin >> n;
    int *arr = NULL;
    arr = new int[n];
    if (arr != NULL)
    {
        NhapMang(arr, n);
        InMang(arr, n);
        SxMang(arr, n);
        InMang(arr, n);
        delete[] arr;
    }
    else
    {
        exit(0);
    }
    return 0;
}

void NhapMang(int *arr, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        cin >> *(arr + i);
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
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

void InMang(int *arr, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}