#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
struct sophuc
{
    float thuc;
    float ao;
};
typedef struct sophuc SOPHUC;
void nhap(SOPHUC& x)
{
    float temp;
    cout << "\nNhap phan thuc:";
    cin >> temp;
    x.thuc = temp;
    cout << "Nhap phan ao:";
    cin >> temp;
    x.ao = temp;
}
void xuat(SOPHUC x)
{
    cout << "\nPhan thuc:" << x.thuc;
    cout << "\nPhan ao:" << x.ao;
}
SOPHUC tong(SOPHUC a, SOPHUC b)
{
    SOPHUC temp;
    temp.thuc = a.thuc + b.thuc;
    temp.ao = a.ao + b.ao;
    return temp;
}
SOPHUC hieu(SOPHUC a, SOPHUC b)
{
    SOPHUC temp;
    temp.thuc = a.thuc - b.thuc;
    temp.ao = a.ao - b.ao;
    return temp;
}
SOPHUC tich(SOPHUC a, SOPHUC b)
{
    SOPHUC temp;
    temp.thuc = a.thuc * b.thuc - a.ao * b.ao;
    temp.ao = a.thuc * b.ao + a.ao * b.thuc;
    return temp;
}
int main()
{
    SOPHUC a, b, kq;
    cout << "\nNhap so phuc thu nhat";
    nhap(a);
    cout << "\nNhap so phuc thu hai";
    nhap(b);
    kq = tong(a, b);
    cout << "\nTong la:";
    xuat(kq);
    kq = hieu(a, b);
    cout << "\nHieu la: ";
    xuat(kq);
    kq = tich(a, b);
    cout << "\nTich la: ";
    xuat(kq);
}