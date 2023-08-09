#include<iostream>
using namespace std;
int main()
{
    int array[100],n,i,j,temp,area=1,c=0;
    cout << "ENTER THE NO OF ELEMENTS IN ANN ARRAY :" << endl;
    cin >> n;
    cout << "ENTER THE ELEMENTS OF AN ARRAY :" << endl;
    for (i=0;i<=n-1;i++)
    {
         cin >> array[i];
    }
    for (i=n-1;i>0;i--)
    {
        for (j=0;j<i;j++)
        {
            if (array[j]> array[j+1])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;

            }
        }
    }
    for(i=n-1;i>=0;i--)
    {
        cout <<"\n" << array[i];
    }

    for(i=n-1;i>=1;i--)
    {
        if(array[i]==array[i+1])
        {
            c++;
            area=area*array[i];
            i--;
        }
        if(c==2)
        {
            break;
        }
    }
    if(c==2)
    {
        cout << "\nAREA IS : " << area << endl;
    }
    cout << "THIS CODE IS PREPARED BY TANISHQ VASANI_22CE136" << endl;

}

