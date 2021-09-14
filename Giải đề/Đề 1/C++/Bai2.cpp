// Hãy viết chương trình nhập vào ngày, tháng, năm sinh và in ra chuỗi có dạng: Ngày sinh/Tháng sinh/Năm sinh.

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int ngaySinh = 0, thangSinh = 0, namSinh = 0;
    cin >> ngaySinh;
    getchar();
    cin >> thangSinh;
    getchar();
    cin >> namSinh;
    cout << ngaySinh << "/" << thangSinh << "/" << namSinh << endl;
    return 0;
}