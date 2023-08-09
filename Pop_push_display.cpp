#include<iostream>
using namespace std;
int top = -1,n;
void push(int x);
int pop();
void display();
int stack_array[20];
int main()
{
    int n,i,x,num;
    do
    {
        cout << "ENTER THE METHOD YOU WANT TO PERFORM : " << endl;
        cin >> num;
        switch(num)
        {
        case 1:

        }
    cout << "ENTER THE NO. OF ELEMENTS YOU WANT TO ENTER : " << endl;
    cin >> n;
    cout << "ENTER THE ELEMENTS OF THE STACK : " << endl;
    for(i=0;i<n;i++)
    {
        cin >>x;
        push(x);
    }
    pop();
    display();

}
void push(int x)
    {
        if (top==4)
        {
            cout << "STACK OVERFLOW..." << endl;
        }
        else
        {
            top=top+1;
            stack_array[top]=x;
        }
    }
    int pop()
    {
        if(top<0)
        {
            cout << "STACK UNDERFLOW..." << endl;
        }
        else
        {
            top=top-1;
            return(stack_array[top+1]);

        }
    }
    void display()
    {
        cout << "THE FINAL STACK IS : " << endl;
        for (int i=top;i>-1;i--)
        {
            cout << stack_array[i] << endl;
        }
    }
