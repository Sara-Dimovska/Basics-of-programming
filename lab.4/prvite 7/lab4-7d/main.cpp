#include<iostream>
using namespace std;

int zbirparnicifri(int n)
{
   int suma=0;
   int cifra;
   while(n>0)
   {
       cifra=n%10; //odeluva posledna cifra
       if(cifra%2==0) //ako e parna da se dodade na zbiro
       suma+=cifra;
       n/=10; //ide na naredna cifra
   }
   return suma;
}

int proizparnicifri(int n)
{
    int p=1;
    int cifra;
    while(n>0)
    {
        cifra=n%10;
        if(cifra!=0) //ako e cifrata e !=0 da ide na narednio uslov
        if(cifra%2==0) //parnost
        p*=p;
        n/=10;
    }
    return p;
}

int main()
{
    int pocetok,kraj;
    int br=0;
    cout<<"vnesi opseg"<<endl;
    cin>>pocetok>>kraj;
    int i;
    for(i=pocetok;i<=kraj;i++)
    {
        if((i%2==0)&&(i%zbirparnicifri(i)==0)&&(i%proizparnicifri(i)==0))
        cout<<i<<endl;//broevi so zadovololuvat 3 uslovi

    }

    return 0;
}
