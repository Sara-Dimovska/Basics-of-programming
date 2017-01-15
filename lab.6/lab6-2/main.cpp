#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a[6][6],n,m,i,j,max,min;
    cin>>n>>m;
    for (i=0;i<=n-1;i++)

        for(j=0;j<=m-1;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j]; //stores
        }
    for (i=0;i<=n-1;i++)
       {for(j=0;j<=m-1;j++)
        cout<<setw(5)<<a[i][j]; //prints a[i][j]
         cout<<endl;
        }
    cout<<endl;
    max=a[0][0]; //mora vaka da stoe
    min=a[0][0];
   for (i=0;i<=n-1;i++) 
    {
       for(j=0;j<=m-1;j++)
        {
		  if(a[i][j] < min)
            min=a[i][j];
          if (a[i][j] > max)
            max=a[i][j];
        }
    }
   cout<<endl;
   cout<<"min="<<min<<" "<<"max="<<max;
return 0;
}
