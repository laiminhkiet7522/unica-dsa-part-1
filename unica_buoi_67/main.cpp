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
void initList(SingleList &l)
{
    l.pHead=l.pTail=NULL;
}
void printList(SingleList l)
{
    for(Node *p=l.pHead; p!=NULL; p=p->pNext)
    {
        cout<<p->data<<"\t";
    }
}
Node *initNode(int value)
{
    Node *p = new Node();
    p->data=value;
    p->pNext=NULL;
    return p;
}
void insertLast(SingleList &l, int value)
{
    Node *p = initNode(value);
    if(l.pTail==NULL)
    {
        l.pHead=l.pTail=p;
    }
    else
    {
        l.pTail->pNext=p;
        l.pTail=p;
    }
}
void sortList(SingleList &l)
{
    for(Node *pi=l.pHead; pi!=NULL; pi=pi->pNext)
    {
        for(Node *pj=pi->pNext; pj!=NULL; pj=pj->pNext)
        {
            if(pi->data>pj->data)
            {
                int temp=pi->data;
                pi->data=pj->data;
                pj->data=temp;
            }
        }
    }
}
int main()
{
    SingleList l;
    initList(l);
    insertLast(l,1);
    insertLast(l,5);
    insertLast(l,2);
    insertLast(l,4);
    insertLast(l,3);
    insertLast(l,6);
    cout<<"Cac node trong danh sach:\n";
    printList(l);
    sortList(l);
    cout<<"\nDanh sach sau khi sap xep tang dan:\n";
    printList(l);
    return 0;
}
