#include <iostream>

using namespace std;
void chuyenDoiCoSo(int n)
{
    if(n>0)
    {
        int soDu=n%2;
        n=n/2;
        chuyenDoiCoSo(n);
        cout<<soDu;
    }
}
int main()
{
    int n = 128;
    cout<<n<<"(10)"<<"=";
    chuyenDoiCoSo(n);
    cout<<"(2)";
    return 0;
}
