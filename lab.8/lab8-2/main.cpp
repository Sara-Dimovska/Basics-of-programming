#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

   struct avtomobil
{
    int rt; //registarski tablici
    int godp;//godina na proizvodstvo
    char marka[10];
    char sops[10]; //sopstvenik
};

void sort_avto(struct avtomobil a [],int n)
{
    int i,j;
    struct avtomobil t;
    for (i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        if (a[j].godp<a[j+1].godp)
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }

    }

int main()
{
   cout<<"vnesi go brojot na avtomobili:";
   struct avtomobil av[50];
   int i,n;
   cin>>n;
   cout<<endl;


for (i=1;i<=n;i++)
{
    cout<<"vnesi podatoci za "<<i<<"-viot avtomobil:"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"vnesi ja registracijata: ";
    cin>>av[i].rt;
    cout<<"vnesi  godina na proizdovstvo: ";
    cin>>av[i].godp;
    cout<<"vnesi marka na avtomobilot: ";
    cin>>av[i].marka;
    cout<<"vnesi sopstvenik na avtomobilot: ";
    cin>>av[i].sops;
    cout<<endl;

}
    sort_avto(av,n);
    for(i=1;i<=n;i++)
    {
        cout<<i+1<<av[i].godp<<" "<<av[i].rt<<" "<<av[i].marka<<" "<<av[i].sops<<endl;
    }

return 0;
}
