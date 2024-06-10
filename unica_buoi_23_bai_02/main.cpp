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
void sapXepMangTangDan(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void xuatGiaTriNhoHon(int a[], int n)
{
    sapXepMangTangDan(a,n);
    for(int i=0; i<n-1; i++)
    {
        cout<<a[i]<<"\t";
    }
}
void xuatGiaTriLonHon(int a[], int n)
{
    sapXepMangTangDan(a,n);
    for(int i=1; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
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

    cout<<"\n\nCac gia tri nho hon gia tri lon nhat trong mang la:\n";
    xuatGiaTriNhoHon(a,n);

    cout<<"\n\nCac gia tri lon hon gia tri nho nhat trong mang la:\n";
    xuatGiaTriLonHon(a,n);
    return 0;
}
