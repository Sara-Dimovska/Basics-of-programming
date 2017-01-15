#include <iostream>

using namespace std;

int main()
{
    int parni[5],neparni[5],pom[5],j=0,k=0;
    int i;
    for (i=0;i<5;i++)
    {
        cin>>pom[i];
    }

    for (i=0;i<5;i++)
    {    if(pom[i]%2==0)
            {parni[j]=pom[i]; j++;}
          else  {neparni[k]=pom[i];k++;}
    }

    cout<<endl;
    for (i=0;i<j;i++)
       cout<<parni[i]<<endl;
    cout<<endl;
    for (i=0;i<k;i++)
       cout<<neparni[i]<<endl;

    return 0;
}
