// Cho một mảng số nguyên a gồm N phần tử. Tìm và in ra phần tử nhỏ nhất và lớn nhất trong mảng đó

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n = 0;
    cin >> n;
    int *arr = new int[n];
    if (arr != NULL)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            cin >> *(arr + i);
        }
        int min = *arr, max = *arr;
        for (i = 1; i < n; i++)
        {
            if (*(arr + i) > max)
                max = *(arr + i);
            if (*(arr + i) < min)
                min = *(arr + i);
        }
        cout << min << " " << max << endl;
        delete[] arr;
    }
    else
    {
        exit(0);
    }
    return 0;
}