#include <iostream>

using namespace std;

struct SanPham
{
    int ma;
    char ten[150];
    float gia;
};
void nhapDanhSach(SanPham dssp[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap thong tin cho san pham thu "<<i+1<<": \n";
        cout<<"Nhap ma san pham: ";
        cin>>dssp[i].ma;
        cout<<"Nhap ten san pham: ";
        cin.ignore();
        cin.getline(dssp[i].ten,150);
        cout<<"Nhap gia ban: ";
        cin>>dssp[i].gia;
    }
}
void xuatDanhSach(SanPham dssp[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<dssp[i].ma<<"\t"<<dssp[i].ten<<"\t"<<dssp[i].gia<<endl;
    }
}
SanPham *timSanPham(SanPham dssp[], int n, float giaTim)
{
    int left=0, right=n-1, mid;
    do
    {
        mid=(left+right)/2;
        if(dssp[mid].gia==giaTim)
        {
            return &dssp[mid];
        }
        else if(dssp[mid].gia>giaTim)
        {
            right = mid-1;
        }
        else
        {
            left = mid+1;
        }
    }
    while(left<=right);
    return NULL;
}
int main()
{
    int n;
    do
    {
        cout<<"Nhap so luong san pham: ";
        cin>>n;
    }
    while(n<=0);
    SanPham dssp[n];
    nhapDanhSach(dssp, n);
    cout<<"\nDanh sach cac san pham ban vua nhap la:\n";
    xuatDanhSach(dssp, n);

    float giaCanTim;
    cout<<"\nNhap gia muon tim: ";
    cin>>giaCanTim;
    SanPham *pSp=timSanPham(dssp,n,giaCanTim);
    if(pSp==NULL)
    {
        cout<<"\nKhong tim thay san pham co gia = "<<giaCanTim<<endl;
    }
    else
    {
        cout<<"\nTim thay san pham co gia = "<<giaCanTim<<endl;
        cout<<pSp->ma<<"\t"<<pSp->ten<<"\t"<<pSp->gia<<endl;
    }
    return 0;
}
