
//https://www.beecrowd.com.br/judge/en/problems/view/1116

#include<bits/stdc++.h>
using namespace std;

int main()
{

    float t,a,b;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;


        if(b==0)
        {
            cout<<"divisao impossivel"<<endl;
        }else
        {
            cout<<a/b<<fixed<<setprecision(1)<<endl;

        }
    }

}
