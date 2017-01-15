#include <iostream>
#include <string>
#include <cmath>

const double pi = 3.14;

using namespace std;

struct konus
{
    float radius;
    float visina;
};

float Povrsina(struct konus r, struct konus H)
{
    return (r.radius*pi)*(r.radius+sqrt(pow(r.radius,2)+pow(H.visina,2)));
}

float Volumen(struct konus r, struct konus H)
{
    return 1.0/3*(pow(r.radius,2)*pi*H.visina);
}

int main()
{
    struct konus k[5];
    int i;
    for(i=1;i<=3;i++)
    {
        cout<<"Vnesi gi podatocite za "<<i<<"-tiot konus "<<endl;
        cout<<"radius : "; cin>>k[i].radius;
        cout<<"visina : "; cin>>k[i].visina;
    }
    for(i=1;i<=3;i++)
{
    cout<<"Podatoci za "<<i<<"-tiot konus"<<endl;
    cout<<"Povrsina : "<<Povrsina(k[i],k[i])<<endl;
    cout<<"Volumen : "<<Volumen(k[i],k[i])<<endl;
}
return 0;
}
