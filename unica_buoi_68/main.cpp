#include <iostream>
#include <math.h>
using namespace std;

struct Node
{
    int x;
    int i;
    Node *pNext;
};
struct SingleList
{
    Node *pHead;
    Node *pTail;
};
void initList(SingleList *&l)
{
    l=new SingleList();
    l->pHead=l->pTail=NULL;
}
Node *createNode(int x, int i)
{
    Node *p = new Node();
    if(p==NULL)
    {
        cout<<"Loi cap phat bo nho"<<endl;
        return NULL;
    }
    p->i=i;
    p->x=x;
    p->pNext=NULL;
    return p;
}
void insertLast(SingleList *&l, int x, int i)
{
    Node *p = createNode(x,i);
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
        if(pTemp->pNext!=NULL)
        {
            cout<<pTemp->x<<"^"<<pTemp->i<<" + ";
        }
        else
        {
            cout<<pTemp->x<<"^"<<pTemp->i;
        }
        pTemp=pTemp->pNext;
    }
}
double sumOfList(SingleList *l)
{
    double sum=0;
    for(Node *pTemp=l->pHead; pTemp!=NULL; pTemp=pTemp->pNext)
    {
        double value = pow(pTemp->x,pTemp->i);
        sum=sum+value;
    }
    return sum;
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
        insertLast(l,x,i);
    }
    cout<<"\nDay so sau khi tao thanh danh sach lien ket:\n";
    printList(l);

    double tong = sumOfList(l);
    cout<<"\nTong = "<<tong<<endl;
    return 0;
}
