#include <iostream>

using namespace std;
int factoriel (int n)
{
    if (n==1)
        return 1;
    else return n*factoriel(n-1);
}


int main()
{
  int broj;
  cout<<"vnesi broj:";
  cin>>broj;
  cout<<"Factoriel od "<<broj<<" e:"<<factoriel(broj)<<endl;
  return 0;
}
