#include <iostream>
#include <cmath>
using namespace std;
int zbirNaCifri(int broj)
{
    int il,st,de,e;
    if ((broj>999)&&(broj<8520))
    {
        il=broj/1000;
        st=broj/100%10;
        de=broj/10%10;
        e=broj%10;
    }
    cout<<"il="<<il<<" "<<"st= "<<st<<" "<<"de="<<de<<" "<<"e="<<e<<endl;

    return pow(il,2)+pow(st,2)+pow(de,2)+pow(e,2);
}
int main()
{
    int broj,de,e,il,st;
    cin>>broj;

    cout<< "zbirot na cifri e:"<<" "<<zbirNaCifri(broj)<<endl;

    return 0;
}
