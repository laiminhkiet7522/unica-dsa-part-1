#include <iostream>

using namespace std;
void thapHaNoi(int n, char A, char B, char C)
{
    if(n==1)
    {
        cout<<A<<"==>"<<C<<"\n";
    }
    else
    {
        thapHaNoi(n-1,A,C,B);
        cout<<A<<"==>"<<C<<"\n";
        thapHaNoi(n-1,B,A,C);
    }
}
int main()
{
    int n=3;
    thapHaNoi(3,'A','B','C');
    return 0;
}
