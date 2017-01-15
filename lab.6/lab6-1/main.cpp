#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a[6][6],n,i,j,g=0,s=0;
    cin>>n;
    for (i=0;i<n;i++)

        for(j=0;j<n;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j]; //stores
        }
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			cout << setw(5) << a[i][j]; //prints a[i][j]
		cout << endl;
	}
    cout<<endl;
    for (i=0;i<n;i++)

        for(j=0;j<n;j++)
        {
            if(i==j)
                g=g+a[i][j]; //glavna dijagonala
            if (i+j==n-1)
                s=s+a[i][j]; //sporedna dijagonala
        }
    if (s>g)
        cout<<s;
    else cout<<g;

    return 0;
}

