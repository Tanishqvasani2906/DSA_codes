#include<iostream>
using namespace std;
int f=-1 , r=-1 , q_array[5];
void enqueue(int n)
{
    if(r==4)
    {
        cout << "QUEUE OVERFLOW..."<< endl;
    }
    else
    {
        r=r+1;
        q_array[r]=n;

    }
     if(f==-1)
        {
            f=0;
        }
}
int dequeue()
{
    int n;
    if(f==-1)
    {
        cout << "QUEUE UNDERFLOW..." << endl;
        return 0;
    }
    else if (f==r)
    {
        f=-1;
        r=-1;
    }
    else
    {
        n=q_array[f];
        f=f+1;
    }
}
void display()
{
    int i;
    for(i=f;i<=r;i++)
    {
        cout << "FINAL QUEUE IS :"
        cout << q_array[i] << endl;
    }
}
int main()
{
    int i;
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    display();
    return 0;
}
