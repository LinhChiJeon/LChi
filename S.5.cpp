#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
struct phanso
{
    int tu;
    int mau;
};
typedef struct phanso PHANSO;
void nhap(PHANSO& x)
{
    cout << "Nhap tu: ";
    cin >> x.tu;
    cout << "Nhap mau: ";
    cin >> x.mau;
}
void xuat(PHANSO x)
{
    cout << "Phan so lon hon la: " << x.tu << "/" << x.mau << "\n";
}
int sosanhphanso(PHANSO x, PHANSO y)
{
    float a = (float)x.tu / x.mau;
    float b = (float)y.tu / y.mau;
    if (a > b)
        return 1;
    if (a < b)
        return -1;
    return 0;
}
int main()
{
    PHANSO a, b;
    cout << "Nhap phan so thu nhat\n";
    nhap(a);
    cout << "Nhap phan so thu hai\n";
    nhap(b);
    if (sosanhphanso(a, b) >= 0)
        xuat(a);
    else
        xuat(b);
}