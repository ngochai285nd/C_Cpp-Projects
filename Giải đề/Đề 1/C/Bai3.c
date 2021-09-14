/*
 * Định nghĩa kiểu struct PhanSo để biểu diễn phân số dưới dạng a/b, trong đó, a là tử số, b là mẫu số, a và b là các số nguyên dương và phân số luôn ở dạng tối giản.
 * 1. Hàm toiGianPS: tối giản một phân số, phân số luôn ở dạng tối giản
 * 2. Hàm nhapPS: nhập dữ liệu cho một phân số như đã miêu tả ở trên
 *    Hàm inPS: in ra dữ liệu của một phân số như đã miêu tả ở trên
 * 3. Hàm tongPS: tính tổng 2 phân số. Hàm nhận vào 3 tham số là 2 phân số cần tính tổng và 1 phân số là tổng của 2 phân số đó.
 * 4. Hàm ssLonHon (kiểu bool): so sánh lớn hơn 2 phân số
 * Viết chương trình chính main() thực hiện các công việc sau:
 * - Nhập dữ liệu cho một mảng N phân số (sử dụng hàm nhapPS)
 * - In ra dữ liệu của mảng N phân số ở trên (sử dụng hàm inPS)
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int tuSo, mauSo;
} PhanSo;

int UCLN(int m, int n)
{
    if (n == 0)
        return m;
    return UCLN(n, m % n);
}

void toiGianPS(PhanSo *ps)
{
    int i = UCLN(ps->tuSo, ps->mauSo);
    ps->tuSo = ps->tuSo / i;
    ps->mauSo = ps->mauSo / i;
}

void nhapPS(PhanSo *ps)
{
    scanf("%d", &(ps->tuSo));
    getchar();
    scanf("%d", &(ps->mauSo));
    toiGianPS(ps);
}

void inPS(PhanSo ps)
{
    printf("%d/%d ", ps.tuSo, ps.mauSo);
}

int main(int argc, char *argv[])
{
    PhanSo *ps = NULL;
    int n = 0;
    scanf("%d", &n);
    ps = (PhanSo *)malloc(n * sizeof(PhanSo));
    if (ps != NULL)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            nhapPS(&ps[i]);
        }
        for (i = 0; i < n; i++)
        {
            inPS(ps[i]);
        }
        printf("\n");
        free(ps);
    }
    else
    {
        exit(0);
    }
    return 0;
}