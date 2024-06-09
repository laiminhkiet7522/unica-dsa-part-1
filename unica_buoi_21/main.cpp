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
void sapXepGiamDan(float a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                float temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int kiemTraTonTai(float a[], int n, float x)
{
    int left=0, right=n-1, mid=0;
    do
    {
        mid = (left+right)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(x<a[mid])
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    while(left<=right);
    return -1;
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
    sapXepGiamDan(a,n);
    cout<<"\nMang sau khi sap xep giam dan la:\n";
    xuatMang(a,n);

    float x;
    cout<<"\n\nNhap x: ";
    cin>>x;
    int res=kiemTraTonTai(a,n,x);
    if(res==-1)
    {
        cout<<x<<" khong ton tai trong mang"<<endl;
    }
    else
    {
        cout<<x<<" co ton tai trong mang, o vi tri thu "<<res<<endl;
    }
    return 0;
}
