#include <iostream>

using namespace std;

int main()
{
   int a[10],n,i;
   cin>>n;
   for (i=0;i<=n-1;i++)
   {
       cout<<"a["<<i<<"]=";
       cin>>a[i]; //vnesuvanje na elementi na nizata
   }
  for (i=0;i<=n-1;i++)
    cout<<" "<<a[i];//pecatenje na nizata
  cout<<endl;
  int counterp=0,countern=0,zp=0,zn=0;
   for (i=0;i<=n-1;i++)
    {
        if (a[i]%2==0) //dali brojo e paren
         {
           zp+=a[i]; //zbir na parni
           counterp++; //brojac na parni elementi
         }
         else
            {zn+=a[i];//zbir na neparni
             countern++; //brojac na neparni elementi
            }
    }
   cout<<"parni elementi:"<<" "<<counterp<<endl;
   cout<<"neparni elementi:"<<" "<<countern<<endl;
   cout<<"sumata na parni elementi:"<<" "<<zp<<endl;
   cout<<"sumata na neparni elementi:"<<" "<<zn<<endl;
   if (zp>zn)
    { int razlika;
      razlika=zp-zn;
      cout<<"sumata na parni e pogolema od sumata na neparni";
      cout<<" "<<"za:"<<razlika;
    }
   else if (zn>zp)
   { int razlika;
     razlika=zn-zp;
     cout<<"sumata na neparni e pogolema od sumata na parni";
     cout<<" "<<"za:"<<razlika;
   }
return 0;

}
