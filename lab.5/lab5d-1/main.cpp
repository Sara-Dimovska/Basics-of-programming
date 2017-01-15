#include <iostream>

using namespace std;

int main()
{   int i,j,n=5;
    int a[n];
    int b[n];

    for(i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    cout<<endl;
    for(j=0;j<n;j++)
    {
        cout<<"b["<<j<<"]=";
        cin>>b[j];
    }
    int counter=0;
    for(i=0;i<n-1;i++)
    {
        for (j=i;j<n;j++)
        {
            if (a[i]==b[j])
            {cout<<a[i]<<" "<<"pozicija"<<" "<<i<<" "<<"od prvata niza"<<" ";
            cout<<"i pozicija"<<" "<<j<<" "<<"od vtorata niza"<<endl;}
        }
    }

    return 0;
}
