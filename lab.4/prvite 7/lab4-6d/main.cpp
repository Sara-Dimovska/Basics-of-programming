#include<iostream>
using namespace std;

int bitcount(int n)
{
   int counter=0;
   int pom=n,cifra;

   while (pom > 0)
   {
	   cifra = pom % 10; //odeluva posledna cifra
	   if (cifra == 1)  //broe gi samo edinecnite bitovi
		   counter++;
	   pom /= 10; //pa se namaluva za edna cifra
   }
return counter;
}


int main()
{
int n;
cin>>n;
cout<<bitcount(n);
return 0;
}
