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
Node *searchNode(SingleList l, int value)
{
    Node *p = l.pHead;
    while(p!=NULL)
    {
        if(p->data==value)
        {
            break;
        }
        p=p->pNext;
    }
    return p;
}
int main()
{
    SingleList l;
    initList(l);
    insertLast(l,1);
    insertLast(l,2);
    insertLast(l,3);
    insertLast(l,4);
    insertLast(l,5);
    insertLast(l,6);
    cout<<"Cac node trong danh sach:\n";
    printList(l);

    int giaTriTim;
    cout<<"\nNhap gia tri node ma ban muon tim: ";
    cin>>giaTriTim;
    Node *pFound=searchNode(l, giaTriTim);
    if(pFound==NULL)
    {
        cout<<"\nKhong tim thay node co gia tri la "<<giaTriTim<<endl;
    }
    else
    {
        cout<<"\nTim thay node co gia tri la "<<giaTriTim<<" trong danh sach"<<endl;
    }
    return 0;
}
