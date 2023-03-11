#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
struct ngay
{
    int ng;
    int th;
    int nm;
};
typedef struct ngay NGAY;
void nhap(NGAY& x)
{
    cout << "Nhap ngay: ";
    cin >> x.ng;
    cout << "Nhap thang: ";
    cin >> x.th;
    cout << "Nhap nam: ";
    cin >> x.nm;
}
void xuat(NGAY x)
{
    cout << "\nNgay: " << x.ng;
    cout << "\nThang: " << x.th;
    cout << "\nNam: " << x.nm;
}
int ktnhuan(NGAY x)
{
    if (x.nm % 4 == 0 && x.nm % 100 != 0)
        return 1;
    if (x.nm % 400 == 0)
        return 1;
    return 0;
}
NGAY ketiep(NGAY x)
{
    int NgayThang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (ktnhuan(x) == 1)
        NgayThang[2] = 29;
    x.ng++;
    if (x.ng > NgayThang[x.th - 1])
    {
        x.th++;
        if (x.th > 12)
        {
            x.nm++;
            x.th = 1;
        }
        x.ng = 1;
    }
    return x;
}
int sttTrongNam(NGAY x)
{
    int ngaythang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (ktnhuan(x) == 1)
        ngaythang[2] = 29;
    int stt = 0;
    for (int i = 1; i <= x.th - 1; i++)
        stt = stt + ngaythang[i - 1];
    return (stt + x.ng);
}
long SoThuTu(NGAY x)
{
    long stt = 0;
    for (int i = 1; i <= x.nm - 1; i++)
    {
        stt = stt + 365;
        NGAY temp = { 1, 1, i };
        if (ktnhuan(temp) == 1)
            stt = stt + 1;
    }
    return (stt + sttTrongNam(x));
}
NGAY TimNgay(int nam, int stt)
{
    int ngaythang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    NGAY temp = { 1, 1, nam };
    if (ktnhuan(temp) == 1)
        ngaythang[2] = 29;
    temp.th = 1;
    while (stt - ngaythang[temp.th - 1] > 0)
    {
        stt = stt - ngaythang[temp.th - 1];
        temp.th++;
    }
    temp.ng = stt;
    return temp;
}
NGAY TimNgay(long stt)
{
    int nam = 1;
    int sn = 365;
    while (stt - sn > 0)
    {
        stt = stt - sn;
        nam++;
        sn = 365;
        NGAY temp = { 1, 1, nam };
        if (ktnhuan(temp) == 1)
            sn = 366;
    }
    return TimNgay(nam, (int)stt);
}
int main()
{
    NGAY a;
    nhap(a);
    NGAY kq = ketiep(a);
    cout << "Ngay ban dau:";
    xuat(a);
    cout << "\nNgay ke tiep";
    xuat(kq);
}
