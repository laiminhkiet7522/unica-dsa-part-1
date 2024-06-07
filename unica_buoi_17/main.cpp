#include <iostream>
#include <string.h>
using namespace std;

struct SinhVien
{
    char ma[10];
    char ten[50];
    bool gioiTinh;
};
void nhapDanhSach(SinhVien dssv[], int siSo)
{
    for(int i=0; i<siSo; i++)
    {
        cout<<"Nhap ma sinh vien: ";
        cin.getline(dssv[i].ma,10);
        cout<<"Nhap ten sinh vien: ";
        cin.getline(dssv[i].ten, 50);
        cout<<"Gioi tinh(m/f): ";
        char gt[2];
        cin.getline(gt, 2);
        if(strcmp(gt,"m")==0)
        {
            dssv[i].gioiTinh=false;
        }
        else
        {
            dssv[i].gioiTinh=true;
        }
        cout<<endl;
    }
}
void xuatDanhSach(SinhVien dssv[], int siSo)
{
    for(int i=0; i<siSo; i++)
    {
        cout<<"Thong tin sinh vien thu "<<i+1<<endl;
        cout<<dssv[i].ma<<"\t"<<dssv[i].ten<<"\t"<<(dssv[i].gioiTinh==true?"Nu":"Nam")<<"\n";
    }
}
SinhVien *timSinhVienTheoMa(SinhVien dssv[], int siSo, char maCanTim[])
{
    for(int i=0; i<siSo; i++)
    {
        if(strcmp(dssv[i].ma, maCanTim)==0)
        {
            return &dssv[i];
        }
    }
    return NULL;
}
int main()
{
    int siSo=3;
    SinhVien dssv[siSo];

    nhapDanhSach(dssv, siSo);
    xuatDanhSach(dssv, siSo);

    char maTim[10];
    cout<<"\nNhap ma muon tim: ";
    cin.getline(maTim, 10);

    SinhVien *pSv = timSinhVienTheoMa(dssv, siSo, maTim);
    if(pSv==NULL)
    {
        cout<<"Khong tim thay ma "<<maTim<<endl;
    }
    else
    {
        cout<<"Tim thay sinh vien co ma la "<<maTim<<endl;
        cout<<pSv->ma<<"\t"<<pSv->ten<<"\t"<<(pSv->gioiTinh==true?"Nu":"Nam")<<"\n";
    }

    cout<<"Nhap vao gioi tinh can tim (m/f): ";
    char gttim[2];
    cin.getline(gttim, 2);
    for(int i=0; i<siSo; i++)
    {
        bool gtTimBool = true;
        if(strcmp(gttim,"f"))
        {
            gtTimBool = false;
        }
        if(dssv[i].gioiTinh==gtTimBool)
        {
            cout<<dssv[i].ma<<"\t"<<dssv[i].ten<<"\t"<<(dssv[i].gioiTinh==true?"Nu":"Nam")<<"\n";
        }
    }

    return 0;
}
