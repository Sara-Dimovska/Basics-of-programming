#include <iostream>
#define max 10

using namespace std;

int main()
{
  int i, n, k, pom;
  int a[max], b[max];
  cout<<"n=";
  cin>>n;
  for (i=0;i<=n-1;i++)
      {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
      }

  cout<<"k=";
  cin>>k;


  if (k<0)
  {
    k=-k;
     for (i=0; i<=n-k; i++)
       b[i]=a[i+k];

     for(i=n-k; i<n; i++)// za krajnite k elementi
       b[i]=a[i-n+k];
  }

  else
  {
      for (i=k;i<=n-1;i++)
        b[i]=a[i-k];
      for(i=0; i<k; i++)// za prvite k elementi
        b[i]=a[n-k+i];
  }

  for(i=0;i<n;i++)
  cout<<b[i]<< " ";

  return 0;

}
