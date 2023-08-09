#include<iostream>
using namespace std;
int main()
{
    int n,c,k,i,weigh[1000],temp=0,s=0,count,j;
    cout << "ENTER THE NO OF OBJECTS WHICH YOU WANT TO ENTER :" << endl;
    cin >> n;
    cout << "ENTER THE MAXIMUM CAPACITY OF THE BAG : " << endl;
    cin >> c;
    cout << "ENTER THE MINIMUM CAPACITY OF THE BAG : " << endl;
    cin >> k;
    cout << "ENTER THE WEIGHTS OF AN OBJECT : " << endl;
    for (i=0; i<n;i++)
    {
        cin >> weigh[i];
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i;j<n;j++)
        {
            s=s+weigh[i];
            if(s<=c && s>=k)
            {
                count++;
            }
            else
            {
                break;
            }
            cout << "max :" << count;

        }

    }


}
