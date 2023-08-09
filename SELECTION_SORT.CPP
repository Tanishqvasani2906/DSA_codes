#include<iostream>
using namespace std;
int main()
{
    int array[100],n,i,j,mini,temp;
    cout << "ENTER THE NO OF ELEMENTS IN AN ARRAY :" << endl;
    cin >> n;
    cout << "ENTER THE ELEMENTS OF AN ARRAY :" << endl;
    for (i=0;i<=n-1;i++)
    {
         cin >> array[i];
    }
    for (i=0;i<=n-2;i++)
    {
        mini=i;
            for(j=i;j<=n-1;j++)
            {
                if(array[j]<array[mini])
                {
                    mini=j;
                }
            }
            if(mini!=i)
            {
                temp=array[mini];
                array[mini]=array[i];
                array[i]=temp;
            }
    }
    for(i=0;i<=n-1;i++)
    {
        cout << "\n" << array[i];
    }
}
