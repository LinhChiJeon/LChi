#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
struct diem
{
    float x;
    float y;
};
typedef struct diem DIEM;
struct tamgiac
{
    DIEM A;
    DIEM B;
    DIEM C;
};
typedef struct tamgiac TAMGIAC;
void nhap(DIEM& P)
{
    float temp;
    cout << "\nNhap x: ";
    cin >> temp;
    P.x = temp;
    cout << "Nhap y: ";
    cin >> temp;
    P.y = temp;
}
void xuat(DIEM P)
{
    cout << "\nx=" << P.x;
    cout << "\ny=" << P.y;
}
void nhap(TAMGIAC& t)
{
    cout << "\nNhap diem A";
    nhap(t.A);
    cout << "Nhap diem B";
    nhap(t.B);
    cout << "Nhap diem C";
    nhap(t.C);
}
void xuat(TAMGIAC t)
{
    cout << "\nA:";
    xuat(t.A);
    cout << "\nB:";
    xuat(t.B);
    cout << "\nC:";
    xuat(t.C);
}
float khoangcach(DIEM P, DIEM Q)
{
    return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}
float chuvi(TAMGIAC t)
{
    float a = khoangcach(t.A, t.B);
    float b = khoangcach(t.A, t.C);
    float c = khoangcach(t.B, t.C);
    return (a + b + c);
}
float dientich(TAMGIAC t)
{
    float a = khoangcach(t.A, t.B);
    float b = khoangcach(t.A, t.C);
    float c = khoangcach(t.B, t.C);
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
DIEM trongtam(TAMGIAC t)
{
    DIEM temp;
    temp.x = (t.A.x + t.B.x + t.C.x) / 3;
    temp.y = (t.A.y + t.B.y + t.C.y) / 3;
    return temp;
}
int main()
{
    TAMGIAC t;
    nhap(t);
    xuat(t);
    float cv = chuvi(t);
    cout << "\nChu vi la: " << cv;
    float dt = dientich(t);
    cout << "\nDien tich la: " << dt;
    DIEM G = trongtam(t);
    cout << "\nTrong tam la: ";
    xuat(G);
}