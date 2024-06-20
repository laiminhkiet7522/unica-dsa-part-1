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
void removeNode(SingleList &l, int value)
{
    Node *pDel = l.pHead;
    if(pDel==NULL)
    {
        cout<<"\nDanh sach rong!"<<endl;
    }
    else
    {
        Node *pPre=NULL;
        while(pDel!=NULL)
        {
            if(pDel->data==value)
            {
                break;
            }
            pPre=pDel;
            pDel=pDel->pNext;
        }
        if(pDel==NULL)
        {
            cout<<"Khong thay so "<<value<<" de xoa"<<endl;
        }
        else
        {
            if(pDel==l.pHead)
            {
                l.pHead=l.pHead->pNext;
                pDel->pNext=NULL;
                delete pDel;
                pDel=NULL;
            }
            else if(pDel->pNext==NULL)
            {
                l.pTail=pPre;
                pPre->pNext=NULL;
                delete pDel;
                pDel=NULL;
            }
            else
            {
                pPre->pNext=pDel->pNext;
                pDel->pNext=NULL;
                delete pDel;
                pDel=NULL;
            }
        }
    }
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
    removeNode(l,1);
    removeNode(l,3);
    removeNode(l,6);
    cout<<"\nCac node con lai sau khi xoa (dau, giua, cuoi) trong danh sach:\n";
    printList(l);
    return 0;
}
