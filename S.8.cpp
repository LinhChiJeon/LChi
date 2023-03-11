#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
struct diem
{
    float x;
    float y;
};
typedef struct diem DIEM;
struct duongtron
{
    DIEM I;
    float R;
};
typedef struct duongtron DUONGTRON;
void nhap(DIEM& P)
{
    float temp;
    cout << "Nhap x: ";
    cin >> temp;
    P.x = temp;
    cout << "Nhap y: ";
    cin >> temp;
    P.y = temp;
}
void nhap(DUONGTRON& c)
{
    float temp;
    cout << "Nhap tam\n";
    nhap(c.I);
    cout << "Nhap ban kinh: ";
    cin >> temp;
    c.R = temp;
}
void xuat(DIEM P)
{
    cout << "\nx=" << P.x;
    cout << "\ny=" << P.y;
}
void xuat(DUONGTRON c)
{
    cout << "\nTam: ";
    xuat(c.I);
    cout << "\nBan kinh:" << c.R;
}
float dientich(DUONGTRON c)
{
    return 3.14 * c.R * c.R;
}
float chuvi(DUONGTRON c)
{
    return 2 * 3.14 * c.R;
}
int main()
{
    DUONGTRON c;
    nhap(c);
    xuat(c);
    float cv = chuvi(c);
    cout << "\nChu vi la: " << cv;
    float dt = dientich(c);
    cout << "\nDien tich la: " << dt;
}
