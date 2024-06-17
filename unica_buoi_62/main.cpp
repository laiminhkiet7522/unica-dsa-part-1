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
    while(pTemp!=NULL)
    {
        nSize++;
        pTemp=pTemp->pNext;
    }

    return nSize;
}
Node *CreateNode(int d)
{
    Node *pNode = new Node();
    if(pNode==NULL)
    {
        cout<<"Loi cap phat bo nho"<<endl;
    }
    else
    {
        pNode->data=d;
        pNode->pNext=NULL;
    }
    return pNode;
}
void InsertFirst(SingleList &l, int d)
{
    Node *pNode = CreateNode(d);
    if(l.pHead==NULL)
    {
        l.pHead=l.pTail=pNode;
    }
    else
    {
        pNode->pNext=l.pHead;
        l.pHead=pNode;
    }
}
int main()
{
    SingleList l;
    Initialize(l);
    InsertFirst(l,1);
    InsertFirst(l,5);
    InsertFirst(l,10);
    cout<<"Cac node trong danh sach:\n";
    PrintList(l);
    return 0;
}
