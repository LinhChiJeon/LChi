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
    cout << "Phan so vua nhap la: " << x.tu << "/" << x.mau << "\n";
}
int xetdau(PHANSO x)
{
    if (x.tu * x.mau > 0)
        return 1;
    else if (x.tu * x.mau < 0)
        return -1;
    return 0;
}
int main()
{
    PHANSO x;
    nhap(x);
    xuat(x);
    if (xetdau(x) == 1)
        cout << "Phan so duong";
    if (xetdau(x) == -1)
        cout << "Phan so am";
    if (xetdau(x) == 0)
        cout << "Phan so =0";
}