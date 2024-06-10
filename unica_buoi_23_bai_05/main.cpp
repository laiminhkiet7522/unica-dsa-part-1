#include <iostream>
#include <string.h>
using namespace std;

struct NhanVien
{
    int MaNV;
    char hoTen[100];
    char diaChi[100];
    bool CBQL;
};
void nhapThongTin(NhanVien dsnv[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap thong tin cho nhan vien thu "<<i+1<<":\n";
        cout<<"Nhap ma nhan vien: ";
        cin>>dsnv[i].MaNV;
        cin.ignore();
        cout<<"Nhap ho ten nhan vien: ";
        cin.getline(dsnv[i].hoTen,100);
        cout<<"Nhap dia chi: ";
        cin.getline(dsnv[i].diaChi, 100);
        cout<<"Co la quan ly(t/f): ";
        char ql[2];
        cin.getline(ql,2);
        if(strcmp(ql,"t")==0)
        {
            dsnv[i].CBQL=true;
        }
        else
        {
            dsnv[i].CBQL=false;
        }
        cout<<endl;
    }
}
void xuatThongTin(NhanVien dsnv[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"\nThong tin nhan vien thu "<<i+1;
        cout<<"\n\t+Ma nhan vien: "<<dsnv[i].MaNV;
        cout<<"\n\t+Ten nhan vien: "<<dsnv[i].hoTen;
        cout<<"\n\t+Dia chi: "<<dsnv[i].diaChi;
        cout<<"\n\t+Quan ly: "<<(dsnv[i].CBQL==true?"Co":"Khong");
    }
}
int demSoQuanLy(NhanVien dsnv[], int n)
{
    int dem=0;
    for(int i=0; i<n; i++)
    {
        if(dsnv[i].CBQL==true)
        {
            dem++;
        }
    }
    return dem;
}

void xuatNhanVienKhongLaQuanLy(NhanVien dsnv[], int n)
{
    cout << "\nDanh sach cac nhan vien khong la quan ly:\n";
    for(int i = 0; i < n; i++)
    {
        if(!dsnv[i].CBQL)
        {
            cout << "\nThong tin nhan vien thu " << i + 1;
            cout << "\n\t+ Ma nhan vien: " << dsnv[i].MaNV;
            cout << "\n\t+ Ten nhan vien: " << dsnv[i].hoTen;
            cout << "\n\t+ Dia chi: " << dsnv[i].diaChi;
            cout << endl;
        }
    }
}
int main()
{
    int n=3;
    NhanVien dsnv[n];

    nhapThongTin(dsnv,n);
    xuatThongTin(dsnv,n);

    cout<<"\n\nSo quan ly la: "<<demSoQuanLy(dsnv,n)<<endl;

    xuatNhanVienKhongLaQuanLy(dsnv, n);
    return 0;
}
