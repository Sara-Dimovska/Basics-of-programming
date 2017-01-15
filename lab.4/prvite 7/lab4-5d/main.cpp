#include <iostream>

using namespace std;

int dvoenFactoriel(int n)
{
    if (n==1) return 1;
    if (n==2) return 2;
    else return n*dvoenFactoriel(n-2);
}

int main()
{
    int broj;
    cin>>broj;
    cout <<dvoenFactoriel(broj);
    return 0;
}
