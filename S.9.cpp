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
    cout << x.tu << "/" << x.mau << "\n";
}
PHANSO tong(PHANSO x, PHANSO y)
{
    PHANSO temp;
    temp.tu = x.tu * y.mau + y.tu * x.mau;
    temp.mau = x.mau * y.mau;
    return temp;
}
PHANSO hieu(PHANSO x, PHANSO y)
{
    PHANSO temp;
    temp.tu = x.tu * y.mau - y.tu * x.mau;
    temp.mau = x.mau * y.mau;
    return temp;
}
PHANSO tich(PHANSO x, PHANSO y)
{
    PHANSO temp;
    temp.tu = x.tu * y.tu;
    temp.mau = x.mau * y.mau;
    return temp;
}
PHANSO thuong(PHANSO x, PHANSO y)
{
    PHANSO temp;
    temp.tu = x.tu * y.mau;
    temp.mau = x.mau * y.tu;
    return temp;
}
int main()
{
    PHANSO a, b, kq;
    cout << "Nhap phan so thu nhat\n";
    nhap(a);
    cout << "Nhap phan so thu hai\n";
    nhap(b);
    kq = tong(a, b);
    cout << "Tong hai phan so la: ";
    xuat(kq);
    kq = hieu(a, b);
    cout << "Hieu hai phan so la: ";
    xuat(kq);
    kq = tich(a, b);
    cout << "Tich hai phan so la: ";
    xuat(kq);
    kq = thuong(a, b);
    cout << "Thuong hai phan so la: ";
    xuat(kq);
}