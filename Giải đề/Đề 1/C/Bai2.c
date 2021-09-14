// Hãy viết chương trình nhập vào ngày, tháng, năm sinh và in ra chuỗi có dạng: Ngày sinh/Tháng sinh/Năm sinh.

#include <stdio.h>

int main(int argc, char *argv[])
{
    int ngaySinh = 0, thangSinh = 0, namSinh = 0;
    scanf("%d", &ngaySinh);
    getchar();
    scanf("%d", &thangSinh);
    getchar();
    scanf("%d", &namSinh);
    printf("%d/%d/%d\n", ngaySinh, thangSinh, namSinh);
    return 0;
}