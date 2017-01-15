#include <iostream>
using namespace std;

int power(int n,int k)
{
    if(k!=1)
     return n*power(n,k-1);
}

int main()
{
    int broj,stepen;
    cout<<"vnesi broj:";
    cin>>broj;
    cout<<"vnesi go stepenot:";
    cin>>stepen;
    cout<<broj<<"^"<<stepen<<"="<<power(broj,stepen)<<endl;
    return 0;
}

