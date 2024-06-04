#include <iostream>

using namespace std;
int tinhLogarit(int n)
{
    if(n<=1)
    {
        return 0;
    }
    return 1+tinhLogarit(n/2);
}
int main()
{
    int n=4;
    cout<<"Log2(4)="<<tinhLogarit(n)<<endl;
    return 0;
}
