#include <iostream>

using namespace std;
int tinhTong(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return (n*n)+tinhTong(n-1);
}
int main()
{
    int n=3;
    cout<<"S(3)="<<tinhTong(n)<<endl;
    return 0;
}
