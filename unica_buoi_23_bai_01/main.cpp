#include <iostream>
#include <math.h>
using namespace std;

void nhapMang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap gia tri phan tu thu "<<i+1<<": ";
        cin>>a[i];
    }
}
void xuatMang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
}
void timKiemGiaTriGanTrungBinh(int a[], int n)
{
    double trungBinh=0;
    double tong=0;
    for(int i=0; i<n; i++)
    {
        tong = tong + a[i];
    }
    trungBinh=tong/n;

    double min_diff = abs(a[0]-trungBinh);
    int giaTri = a[0];

    for(int i=1; i<n; i++)
    {
        double diff = abs(a[i]-trungBinh);
        if(diff<min_diff)
        {
            min_diff=diff;
            giaTri=a[i];
        }
    }
    cout<<"\nSo gan nhat voi trung binh cong la: "<<giaTri<<endl;
}
int main()
{
    int n;
    do
    {
        cout<<"Nhap so luong phan tu mang: ";
        cin>>n;
    }
    while(n<=0);

    int a[n];
    nhapMang(a,n);
    cout<<"\nMang ban vua nhap la:\n";
    xuatMang(a,n);
    timKiemGiaTriGanTrungBinh(a,n);
    return 0;
}
