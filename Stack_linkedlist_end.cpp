#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
}*head =NULL;
struct node *create (int x)
{
    struct node *new1;
    new1=(struct node *)malloc(sizeof (struct node)); // TYPE CASTING IS USED TO TAKE WHICH TYPE OF VARIABLE TO TAKE
    new1 -> data =x;
    new1 -> link =NULL;
    return new1;

};
/*void insertfront(int x)  // works as push function
{
    struct node * temp;
    temp= create(x);      // FOR INSERTING FIRST NODE IN LINKED LIST...
    if (head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->link = head;
        head=temp;
    }

}*/
void insertend(int x)
{
    struct node *new1;
    struct node *t=head;
    new1=create(x);
    if(head==NULL)
    {
        head=new1;
    }
    else
    {
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=new1;
    }
}
void display()
{
   /*cout << head -> data << endl; // MEMBER SELECTION OPERATOR IS USED TO PRINT (->)
    cout << head -> link; */
    struct node *t = head;
    while(t!=NULL)
    {
        cout<<t->data<<endl;
        cout<<t->link<<endl;
        t=t->link;
    }

}
/*void deletefront()   // works as pop function
{
    if(head==NULL)
    {
        cout << "STACK UNDERFLOW..." << endl;
    }
    else
    {
        cout << "popped element is :" << head->data <<" " <<head->link << endl; // IT IS USED TO SEE THE POPPED ELEMENT'S ADDRESS AND VALUE
        head=head->link;
    }
}*/
void deleteend()
{
    struct node *t =head;
    struct node *pred;
    if(head==NULL)
    {
        cout << "STACK UNDERFLOW..." << endl;
    }
    else
    {
        while(t->link!=NULL)
        {
            pred=t;
            t=t->link;
        }
        pred->link =NULL;
    }
}
int main()
{
    /*insertfront(10);
    insertfront(20);
    insertfront(30);
    display();
    deletefront();
    display();
    return 0;*/
    insertend(10);
    insertend(20);
    insertend(30);
    deleteend();
    display();
}
