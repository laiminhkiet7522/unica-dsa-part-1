#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

void taoMangNgauNhien(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        a[i]=rand()%100 + 1;
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
int timSoNhoThuHai(int a[], int n)
{
    int max1=-1e9-1, max2=-1e9-1;
    for(int i=0; i<n; i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2)
        {
            max2=a[i];
        }
    }
    return max2;
}
int main()
{
    srand(time(NULL));
    int n;
    do
    {
        cout<<"Nhap so luong phan tu mang: ";
        cin>>n;
    }
    while(n<=0);
    int a[n];
    taoMangNgauNhien(a,n);
    cout<<"\nMang vua tao ngau nhien la:\n";
    xuatMang(a,n);
    sapXepMangTangDan(a,n);
    cout<<"\nSo lon thu hai trong mang la: "<<timSoNhoThuHai(a,n)<<endl;
    return 0;
}
