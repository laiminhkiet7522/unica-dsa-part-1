#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void nhapMang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        a[i] = rand() % 100 - 50;
    }
}
void xuatMang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
}
void selectionSort(int a[], int n)
{
    int min;
    for(int i=0; i<n-1; i++)
    {
        min=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}
int main()
{
    srand(time(NULL));
    int n;
    cout<<"Nhap so phan tu mang muon tao ngau nhien: ";
    cin>>n;
    int a[n];
    nhapMang(a,n);
    xuatMang(a,n);
    selectionSort(a,n);
    cout<<"\nMang sau khi sap xep tang dan la:\n";
    xuatMang(a,n);
    return 0;
}
