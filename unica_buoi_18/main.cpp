#include <iostream>

using namespace std;
void nhapMang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap phan tu thu "<<i<<": ";
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
int binarySearch(int a[], int n, int x)
{
    int left=0;
    int right=n-1;
    int mid;
    do
    {
        mid = (left+right)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]>x)
        {
            right = mid -1;
        }
        else
        {
            left = mid + 1;
        }
    }
    while(left<=right);
    return -1;
}
int binarySearchRecursion(int a[], int x, int left, int right)
{
    if(left > right)
    {
        return -1;
    }
    int mid=(left+right)/2;
    if(x==a[mid])
    {
        return mid;
    }
    if(x<a[mid])
    {
        return binarySearchRecursion(a,x,left,mid-1);
    }
    return binarySearchRecursion(a,x,mid+1,right);
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


    int x;
    cout<<"\n\nTim kiem nhi phan cach binh thuong";
    cout<<"\nNhap gia tri muon tim: ";
    cin>>x;

    int res1 = binarySearch(a,n,x);
    if(res1!=-1)
    {
        cout<<x<<" tim thay tai vi tri thu "<<res1<<endl;
    }
    else
    {
        cout<<x<<" khong ton tai trong mang ban vua nhap"<<endl;
    }

    int y;
    cout<<"\n\nTim kiem nhi phan cach de quy";
    cout<<"\nNhap gia tri muon tim: ";
    cin>>y;

    int res2 = binarySearchRecursion(a,y,0,n-1);
    if(res2!=-1)
    {
        cout<<y<<" tim thay tai vi tri thu "<<res2<<endl;
    }
    else
    {
        cout<<y<<" khong ton tai trong mang ban vua nhap"<<endl;
    }

    return 0;
}
