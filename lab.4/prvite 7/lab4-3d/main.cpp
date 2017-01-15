#include <iostream>
#include <cmath>

float const PI=3.14;

int perimetar(int x)
{
    int L;
    L=2*x*PI;
    return L;
}
int plostina (int x)
{
    int P;
    P=pow(x,2)*PI;
    return P;
}
using namespace std;

int main()
{
    int r;
    cout<<"vnesi go rariusot na kruznicata"<<endl;
    cin>>r;
    int L,P;
    cout<<"Perimetarot e:"<<perimetar(r)<<" "<<"Plostinata e:"<<plostina(r);

    return 0;
}
