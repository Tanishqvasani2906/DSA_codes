#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};
struct node *f=NULL;
struct node *r=NULL;

struct node *create(int n)
{
    struct node *temp1;
    temp1=(struct node *)malloc(sizeof(struct node));
    temp1->data=n;
    temp1->link=NULL;
    return temp1;
}
void insert1(int n)
{
    struct node *temp;
    temp = create(n);
    if(f==NULL || r==NULL)
    {
        f=temp;
        r=temp;
    }
    else
    {
        r->link=temp;
        r=temp;
    }
}

void delete1()
{
    if(f==NULL)
    {
        cout << "QUEUE UNDERFLOW...";
    }
    if(f==r)
    {
        //struct node *temp;
        f=r=NULL;
        //free(temp);
    }
    else
    {
        struct node *temp;
       temp=f;
        f=f->link;
        free(temp);
    }
}
void display()
{
    struct node *t=f;
    while(t!=NULL)
    {
        cout << t->data<< endl;
        cout << t->link<< endl;;
        t=t->link;
    }
}

int main()
{
    insert1(10);
    insert1(20);
    insert1(30);
    delete1();
    display();
}

