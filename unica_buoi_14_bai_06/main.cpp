#include <iostream>
#include <math.h>
using namespace std;

int demChuSo(int n)
{
    if (n == 0)
        return 0;
    return 1 + demChuSo(n / 10);
}

int daoNguocSo(int n)
{
    if (n == 0)
        return 0;
    int digits = demChuSo(n) - 1;
    int lastDigit = n % 10;
    return lastDigit * pow(10, digits) + daoNguocSo(n / 10);
}

int main()
{
    int n = 123;
    int reversedNumber = daoNguocSo(n);
    cout << "So nghich dao cua " << n << " la: " << reversedNumber << endl;
    return 0;
}
