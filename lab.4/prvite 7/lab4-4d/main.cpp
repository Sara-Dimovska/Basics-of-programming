#include <iostream>
#include <cmath>
using namespace std;
int zbirNaCifri(int broj)
{
    int  pom=broj;
    int cifra,suma=0;
    if (broj<=9) //ednocifren
        return broj;

    if ((broj>9)&&(broj<100)) //dvocifren
        return (pom%10)+(pom/10);

    else //povekjecifren
    {
        while (pom>0)
        {
            cifra=pom%10;
            suma=suma+cifra;
            pom=pom/10;
        }
        return suma;
    }
}
int main()
{
    int broj;
    cin>>broj;

    cout<< "zbirot na cifri e:"<<" "<<zbirNaCifri(broj)<<endl;

    return 0;
}
