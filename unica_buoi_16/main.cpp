#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void nhapMang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        a[i]=rand()%101;
    }
}
void xuatMang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
}
int linearSearch(int a[], int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    srand(time(NULL));
    int n=10;
    int a[n];
    nhapMang(a,n);
    cout<<"Mang co 10 phan tu vua tao ngau nhien la:\n";
    xuatMang(a,n);
    int x;
    cout<<"\n\nNhap vao phan tu muon tim: ";
    cin>>x;
    int res = linearSearch(a,n,x);
    if(res!=-1)
    {
        cout<<"Phan tu co gia tri la "<<x<<" duoc tim thay o vi tri thu "<<res<<endl;
    }
    else
    {
        cout<<"Khong tim thay phan tu co gia tri la "<<x<<" trong mang"<<endl;
    }
    return 0;
}
