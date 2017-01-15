#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a[6][6],n,i,j,max,min;
    cin>>n;
    for (i=0;i<=n-1;i++)

        for(j=0;j<=n-1;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j]; //stores
        }

    cout<<endl;
    max=a[0][0];
    min=a[0][0];
    for (i=0;i<=n-1;i++)
    {  for(j=0;j<=n-1;j++)
         {
          if(a[i][j] < min)
            min=a[i][j];
          if (a[i][j] > max)
            max=a[i][j];
        }
    }
   int razlika;
   razlika=max-min;

    for (i=0;i<=n-1;i++)
       {for(j=0;j<=n-1;j++)
         {
             if (i==j) //uslov za elemnti po glavna dijagonala
                a[i][j]=razlika;
         }
        }
    for (i=0;i<=n-1;i++)
       {for(j=0;j<=n-1;j++)
          cout<<setw(5)<<a[i][j];
        cout<<endl;
       }

      return 0;
}
