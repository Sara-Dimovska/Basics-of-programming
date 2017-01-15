#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a[7][7],n,i,j,snad;
    cin>>n;
    for (i=0;i<=n-1;i++)

        for(j=0;j<=n-1;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j]; //stores
        }
    for (i=0;i<=n-1;i++)
       {for(j=0;j<=n-1;j++)
        cout<<setw(5)<<a[i][j]; //prints a[i][j]
         cout<<endl;
        }
    cout<<endl;
    snad=0;

    for (i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
         {
             if (i<j)
                snad=snad+a[i][j];
         }
    }
    cout<<snad;
    return 0;
    }
