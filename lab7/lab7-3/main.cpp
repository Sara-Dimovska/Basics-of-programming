#include <iostream>

using namespace std;

int main()
{
    int a[10],b[10],n,i,j;
    cin>>n;
    cout<<"vnesi gi koordinatite na prviot vektor"<<endl;
    for(i=0;i<=n-1;i++) //store a[n]
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    cout<<"vnesi gi koordinatite na vtoriot vektor"<<endl;
    for(i=0;i<=n-1;i++) //store b[n]
    {
        cout<<"b["<<i<<"]=";
        cin>>b[i];
    }
    cout<<endl;
    int skp=0;
    for (i=0;i<=n-1;i++)
     skp+=a[i]*b[i];

   cout<<"skalarniot proizvod na vektorite e:"<<skp;
    return 0;
}
