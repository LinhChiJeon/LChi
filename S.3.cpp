#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
struct diemkg
{
    float x;
    float y;
    float z;
};
typedef struct diemkg DIEMKG;
void nhap(DIEMKG& P)
{
    float temp;
    cout << "\nNhap x:";
    cin >> temp;
    P.x = temp;
    cout << "Nhap y:";
    cin >> temp;
    P.y = temp;
    cout << "Nhap z:";
    cin >> temp;
    P.z = temp;
}
void xuat(DIEMKG P)
{
    cout << "\nx=" << P.x;
    cout << "\ny=" << P.y;
    cout << "\nz=" << P.z;
}
float khoangcach(DIEMKG P, DIEMKG Q)
{
    return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y) + (Q.z - P.z) * (Q.z - P.z));
}
int main()
{
    DIEMKG A, B;
    cout << "\nNhap toa do A";
    nhap(A);
    cout << "\nNhap toa do B";
    nhap(B);
    float kq = khoangcach(A, B);
    xuat(A);
    xuat(B);
    cout << "\nKhoang cach la: " << kq;
}