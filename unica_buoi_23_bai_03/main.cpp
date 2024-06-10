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
double tinhTrungBinhCong(int a[], int n, int k)
{
    double tong=0;
    int dem=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>=k)
        {
            tong = tong + a[i];
            dem++;
        }
    }
    double trungBinh = tong/dem;
    return trungBinh;
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

    int k;
    cout<<"\n\nNhap k: ";
    cin>>k;
    double res = tinhTrungBinhCong(a,n,k);
    cout<<"\nTrung binh cong cac so lon hon bang k la: "<<res<<endl;
    return 0;
}
