#include <iostream>
#include <cmath>
using namespace std;

int Sqrt(int x)
{
    return sqrt(x);
}

int main()
{
    int n;
    cout<< "Enter the value of number"<<endl;
    cin>>n;

    if(!cin) //if input's != number
        cout<< "You have entered wrong value"<<endl;
    else
        cout<<"Sqrt("<<n<<")="<<Sqrt(n);

    return 0;
}
