#include <iostream>

using namespace std;
int tinhTong(int n)
{
    if(n<10)
    {
        return n;
    }
    return (n%10)+tinhTong(n/10);
}
int main()
{
    int n=123;
    cout<<"S(123)="<<tinhTong(n)<<endl;
    return 0;
}
