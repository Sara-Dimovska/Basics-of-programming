#include <iostream>

using namespace std;

int main()
{   int i;
    int a[5];
    int b[5];
    double zbir[5];

    for(i=1;i<=5;i++)
        a[i]=i;
    for(i=1;i<=5;i++)
        b[i]=i;
    for (i=1;i<=5;i++)
        zbir[i]=a[i]+b[i];
    for(i=1;i<=5;i++)
    cout<<"zbir["<<i<<"]="<<zbir[i]<<endl;



    return 0;
}
