#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *pNext;
};
struct SingleList
{
    Node *pHead;
    Node *pTail;
};
void Initialize(SingleList &l)
{
    l.pHead=l.pTail=NULL;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
