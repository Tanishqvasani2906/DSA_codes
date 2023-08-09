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
void insertfront(int x)  // works as push function
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
void deletefront()   // works as pop function
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
}
int main()
{
    insertfront(10);
    insertfront(20);
    insertfront(30);
    display();
    deletefront();
    display();
    return 0;
}
