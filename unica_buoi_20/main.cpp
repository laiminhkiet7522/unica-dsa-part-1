#include <iostream>

using namespace std;

void nhapMang(float a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap gia tri cho phan tu thu "<<i+1<<": ";
        cin>>a[i];
    }
}
void xuatMang(float a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
}
int demLanXuatHien(float a[], int n, float x)
{
    int dem=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            dem++;
        }
    }
    return dem;
}
float timChanLonNhat(float a[], int n)
{
    float chanMax=-1e9-1;
    for(int i=0; i<n; i++)
    {
        if((int)a[i]%2==0 && a[i]>chanMax)
        {
            chanMax=a[i];
        }
    }
    return chanMax;
}
float timLeNhoNhat(float a[], int n)
{
    float leMin=1e9-1;
    for(int i=0; i<n; i++)
    {
        if((int)a[i]%2!=0 && a[i]<leMin)
        {
            leMin=a[i];
        }
    }
    return leMin;
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
    float a[n];

    nhapMang(a,n);
    cout<<"\nMang ban vua nhap:\n";
    xuatMang(a,n);

    float x;
    cout<<"\n\nNhap x: ";
    cin>>x;
    int dem=demLanXuatHien(a,n,x);
    cout<<"So lan xuat hien cua "<<x<<" trong mang la: "<<dem<<endl;

    float soChanLonNhat = timChanLonNhat(a,n);
    if(soChanLonNhat==-1e9-1)
    {
        cout<<"Mang ban vua nhap khong ton tai so chan lon nhat"<<endl;
    }
    else
    {
        cout<<"\n\nSo chan lon nhat trong mang la: "<<soChanLonNhat<<endl;
    }

    float soLeNhoNhat = timLeNhoNhat(a,n);
    if(soLeNhoNhat==-1e9-1)
    {
        cout<<"Mang ban vua nhap khong ton tai so le nho nhat"<<endl;
    }
    else
    {
        cout<<"\n\nSo le nho nhat trong mang la: "<<soLeNhoNhat<<endl;
    }
    return 0;
}
