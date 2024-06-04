#include <iostream>

using namespace std;
int tinhToHop(int n, int k)
{
    if(k==0 || n==k)
    {
        return 1;
    }
    return tinhToHop(n-1,k)+tinhToHop(n-1,k-1);
}
int main()
{
    int n=5;
    int k=3;
    int res=tinhToHop(n,k);
    cout<<"C(5,3) = ";
    cout<<res<<endl;
    return 0;
}
