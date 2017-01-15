#include <iostream>

using namespace std;
int DelivostNaCifri(int n)
{
    int pom=n;
    int i=0; //brojac
    if (pom<=9) //ako e ednocifren
        return 0;
    if (pom>9&&pom<=99) //ako e dvocifren
      { if ((pom/10)%(pom%10)==0) //delivost
        return 1;
      }
    else

        if (((pom%100)/10)%(pom%10)==0) //pretposledna%posledna cifra
            i=1;
        return i+DelivostNaCifri(pom/10);

}

int main()
{
   int broj;
   cout<<"vnesi broj:";
   cin>>broj;
   cout<<"brojot na cifri koi se delivi so slednata cifra e:";
   cout<<DelivostNaCifri(broj);
   return 0;
}
