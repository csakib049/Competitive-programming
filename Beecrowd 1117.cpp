
//https://www.beecrowd.com.br/judge/en/problems/view/1117

#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b;
f:
    cin>>a;
    if(a<0 || a>10 )
    {

        cout<<"nota invalida"<<endl;

        goto f;
    }
g:
    cin>>b;

    if(b<0 || b>10)
    {

        cout<<"nota invalida"<<endl;

        goto g;
    }
    else
    {
        cout<<"media = "<<(a+b)/2<<fixed<<setprecision(2)<<endl;

    }

}


