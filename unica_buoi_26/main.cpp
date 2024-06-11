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
void sapXepNoiBot(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=n-1; j>i; j--)
        {
            if(a[j]<a[j-1])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}
int main()
{
    srand(time(NULL));
    int n;
    do
    {
        cout<<"Nhap so luong phan tu: ";
        cin>>n;
    }
    while(n<=0);
    int a[n];
    nhapMang(a,n);
    cout<<"\nMang vua duoc tao ngau nhien la:\n";
    xuatMang(a,n);
    sapXepNoiBot(a,n);
    cout<<"\n\nMang sau khi sap xep noi bot (tang dan) la:\n";
    xuatMang(a,n);
    return 0;
}
