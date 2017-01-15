#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i,a[50];

    for(i=1;i<=50;i++)
        a[i]=pow(i,2);

    for(i=1;i<=50;i++)
        cout<<a[i]<<endl;

    return 0;
}
