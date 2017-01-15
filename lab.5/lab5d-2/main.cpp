#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i,j,n=5;
    int niza1[n],niza2[n];
    for (i=0;i<n;i++)
    {
        cout<< "niza1["<<i<<"]=";
        cin>>niza1[i];
    }
    cout<<endl;
    for (j=0;j<n;j++)
    {
        cout<< "niza2["<<j<<"]=";
        cin>>niza2[j];
    }

 int niza3[10],k=0;
    for (i=0;i<n;i++)
    {
      for (j=0;j<n;j++)
      {
          if (niza1[i]==niza2[j]) //traze gi zaed.elem. na bilo koi poz.
          { niza3[k]=niza1[i]; //zaedn.elem. na bilo koi pozicii=niza3
            k++;
          }

      }

    }
   cout<<"zaednicki elementi se:"<<endl;
   for (i=0;i<=k-1;i++)
    cout<<niza3[i]<<" ";
    return 0;
}
