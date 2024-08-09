#include <iostream>
#include <math.h>
using namespace std;

struct PhanSo
{
    int tu;
    int mau;
};
struct Node
{
    PhanSo *data;
    Node *pNext;
};
struct SingleList
{
    Node *pHead;
    Node *pTail;
};
void initList(SingleList *&l)
{
    l = new SingleList();
    l->pHead=l->pTail=NULL;
}
Node *createNode(int tu, int mau)
{
    Node *p = new Node();
    if(p==NULL)
    {
        cout<<"Loi cap phat bo nho"<<endl;
        return NULL;
    }
    PhanSo *ps = new PhanSo();
    ps->tu=tu;
    ps->mau=mau;
    p->data=ps;
    p->pNext=NULL;
    return p;
}
void insertLast(SingleList *&l, int tu, int mau)
{
    Node *p = createNode(tu,mau);
    if(l->pTail==NULL)
    {
        l->pHead=l->pTail=p;
    }
    else
    {
        l->pTail->pNext=p;
        l->pTail=p;
    }
}
void printList(SingleList *l)
{
    Node *pTemp = l->pHead;
    while(pTemp!=NULL)
    {
        PhanSo *ps = pTemp->data;
        if(pTemp->pNext!=NULL)
        {
            cout<<ps->tu<<"/"<<ps->mau<<"+";
        }
        else
        {
            cout<<ps->tu<<"/"<<ps->mau;
        }
        pTemp=pTemp->pNext;
    }
}
int tinhGiaiThua(int n)
{
    int res=1;
    for(int i=2; i<=n; i++)
    {
        res = res * i;
    }
    return res;
}
double sumOfList(SingleList *l)
{
    double tong=0.0;
    Node *pTemp = l->pHead;
    while(pTemp!=NULL)
    {
        PhanSo *ps = pTemp->data;
        tong = tong + (ps->tu*1.0/ps->mau);
        pTemp=pTemp->pNext;
    }
    return tong;
}
int main()
{
    SingleList *l;
    initList(l);
    int n, x;
    cout<<"Nhap n: ";
    cin>>n;
    cout<<"Nhap x: ";
    cin>>x;
    for(int i=1; i<=n; i++)
    {
        int tu=pow(x,i);
        int mau=tinhGiaiThua(i);
        insertLast(l,tu,mau);
    }
    cout<<"\nDanh sach sau khi nhap:\n";
    printList(l);
    double sum=sumOfList(l);
    cout<<"\nTong = "<<sum<<endl;
    return 0;
}
