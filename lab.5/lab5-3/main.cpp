#include <iostream>

using namespace std;

int main()
{   int i,n=5;
    int a[n];
    int b[n];

    for (i=1;i<=n;i++)
    {
        cout<< "a["<<i<<"]=";
        cin>>a[i];
    }

    for (i=1;i<=n;i++)
    {
        cout<< "b["<<i<<"]=";
        cin>>b[i];
    }
    int counter=0;
    for (i=1;i<=n;i++)
    {
        if (b[i]==a[i])
        {counter++;
        cout<< "zaednicki element na pozicija:"<<" "<<counter<<endl;}
        else  if (b[i]!=a[i])
             counter++;
             continue;


    }

    return 0;
}
