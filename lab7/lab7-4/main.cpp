#include <iostream>

using namespace std;

int main()
{
    int a[10],n,i;
    cin>>n;
    cout<<"vnesi ja nizata"<<endl;
    for(i=0;i<=n-1;i++) //store a[n]
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }


       if(a[n-1]>a[n-2])
            cout<<"nizata e rastecka"<<endl;

                if(a[n-1]>=a[n-2])
                cout<<"nizata e strogo rastecka"<<endl;

         if (a[n-1]<a[n-2])
            cout<<"nizata e opagjacka"<<endl;

              if(a[n-1]<=a[n-2])
                cout<<"nizata e strogo opagjacka"<<endl;




    return 0;
}
