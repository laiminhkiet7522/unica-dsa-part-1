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
void PrintList(SingleList l)
{
    Node *pTemp = l.pHead;
    if(pTemp==NULL)
    {
        cout<<"Danh sach rong!"<<endl;
        return;
    }
    else
    {
        while(pTemp!=NULL)
        {
            cout<<pTemp->data<<"\t";
            pTemp=pTemp->pNext;
        }
    }
}
int SizeOfList(SingleList l)
{
    Node *pTemp = l.pHead;
    int nSize=0;
    if(pTemp==NULL)
    {
        cout<<"Danh sach rong!"<<endl;
        return;
    }
    else
    {
        while(pTemp!=NULL)
        {
            nSize++;
            pTemp=pTemp->pNext;
        }
    }
    return nSize;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
