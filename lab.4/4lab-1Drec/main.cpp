#include <iostream>
#include <cmath>
using namespace std;
int EuclideanAlgorithm(int a,int b)
{
    if((a%b)==0) //ako nema ostatok
        return b;//nzd e vtorio broj
    else
        return EuclideanAlgorithm(b,a-b);
}

int main()
{
    int a,b;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"nzd na:"<<a<<" i "<<b<<" e "<<abs(EuclideanAlgorithm(a,b));

    return 0;
}
