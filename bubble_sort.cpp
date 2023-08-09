#include<iostream>
using namespace std;
int main()
{
    int array[1000],n,i,j,temp;
    cout << "ENTER THE ELEMENTS OF AN ARRAY :" << endl;
    cin >> array[i];
    for (i=n-1;i>=1;i--)
    {
        for (j=0;j<=i-1;j++)
        {
            if (array[j]> array[j+1])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;

            }
        }
    }


}