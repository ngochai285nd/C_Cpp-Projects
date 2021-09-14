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

#include <iostream>

using namespace std;

struct PhanSo
{
    int tuSo, mauSo;
};

int UCLN(int, int);
void toiGianPS(PhanSo *);
void nhapPS(PhanSo *);
void inPS(PhanSo);

int main(int argc, char *argv[])
{
    int n = 0;
    cin >> n;
    PhanSo *ps = new PhanSo[n];
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
        cout << endl;
        delete[] ps;
    }
    else
    {
        exit(0);
    }
    return 0;
}

int UCLN(int a, int b)
{
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}

void toiGianPS(PhanSo *ps)
{
    int i = UCLN(ps->tuSo, ps->mauSo);
    ps->tuSo = ps->tuSo / i;
    ps->mauSo = ps->mauSo / i;
}

void nhapPS(PhanSo *ps)
{
    cin >> ps->tuSo;
    getchar();
    cin >> ps->mauSo;
    toiGianPS(ps);
}

void inPS(PhanSo ps)
{
    cout << ps.tuSo << "/" << ps.mauSo << " ";
}