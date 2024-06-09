#include <iostream>
#include <string>
using namespace std;

int soSachTimDuoc = 0;

struct Book
{
    int ma;
    char ten[150];
    int nam;
};

void nhapDanhSach(Book* dsb, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin cho sach thu " << i + 1 << ":\n";
        cout << "Nhap ma sach: ";
        cin >> dsb[i].ma;
        cin.ignore();
        cout << "Nhap ten sach: ";
        cin.getline(dsb[i].ten, 150);
        cout << "Nhap nam xuat ban: ";
        cin >> dsb[i].nam;
    }
}

void xuatDanhSach(const Book* dsb, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "\nThong tin sach thu " << i + 1;
        cout << "\n\t+ Ma sach: " << dsb[i].ma;
        cout << "\n\t+ Ten sach: " << dsb[i].ten;
        cout << "\n\t+ Nam xuat ban: " << dsb[i].nam;
    }
}

Book* timSachTheoNamXuatBan(const Book* dsb, int n, int year, int &soSachTimDuoc)
{
    Book* dsTimDuoc = new Book[n];
    soSachTimDuoc = 0;
    for(int i = 0; i < n; i++)
    {
        if(dsb[i].nam == year)
        {
            dsTimDuoc[soSachTimDuoc] = dsb[i];
            soSachTimDuoc++;
        }
    }
    return dsTimDuoc;
}

int main()
{
    int n;
    do
    {
        cout << "Nhap so luong sach: ";
        cin >> n;
    }
    while(n <= 0);

    Book* dsb = new Book[n];
    nhapDanhSach(dsb, n);
    xuatDanhSach(dsb, n);

    int year;
    cout << "\n\nNhap nam xuat ban muon tim: ";
    cin >> year;

    Book* danhSachBookTimDuoc = timSachTheoNamXuatBan(dsb, n, year, soSachTimDuoc);

    if(soSachTimDuoc == 0)
    {
        cout << "\nKhong co cuon sach nao co nam xuat ban = " << year << endl;
    }
    else
    {
        cout << "\nCac sach tim thay:\n";
        xuatDanhSach(danhSachBookTimDuoc, soSachTimDuoc);
    }

    delete[] dsb;
    delete[] danhSachBookTimDuoc;

    return 0;
}
