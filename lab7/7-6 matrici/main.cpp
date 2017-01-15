#include<iostream>
#define MAX 100
using namespace std;

int main()
{
 int n,i,j,a[MAX][MAX];
 int sumKol=1,sumRed=1;
 cout<<"vnesi red na matrica:";
 cin>>n;
 for(i=0;i<n;i++) //stores
 {
     for(j=0;j<n;j++)
     {   cout<<"a["<<i<<"]["<<j<<"]=";
         cin>>a[i][j];
     }
 }
 for (i=0; i<n; i++)
  {
    for (j=0; j<n; j++)
        {
           if ((j%2)==0)
           sumKol *= a[i][j];
           if ((i%2)!=0)
           sumRed *= a[i][j];
        }
  }
cout<<sumKol+sumRed<<endl;



    return 0;
}

