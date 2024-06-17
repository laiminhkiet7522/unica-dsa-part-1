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
void InsertLast(SingleList &l, int d)
{
    Node *pNode = CreateNode(d);
    if(l.pTail==NULL)
    {
        l.pHead=l.pTail=pNode;
    }
    else
    {
        l.pTail->pNext=pNode;
        l.pTail=pNode;
    }
}
int main()
{
    SingleList l;
    Initialize(l);

    InsertFirst(l,1);
    InsertFirst(l,5);
    InsertFirst(l,10);

    InsertLast(l,15);
    InsertLast(l,20);
    InsertLast(l,25);

    cout<<"Cac node trong danh sach:\n";
    PrintList(l);

    int sizeList = SizeOfList(l);
    cout<<"\n\nCo "<<sizeList<<" node trong danh sach"<<endl;
    return 0;
}
