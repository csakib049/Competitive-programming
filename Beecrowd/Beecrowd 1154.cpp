//https://www.beecrowd.com.br/judge/en/problems/view/1154

#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b=0,c=0;

    while(1)
    {
        cin>>a;

        if(a>=0)
        {
            c++;

        }
        else if(a<0)
        {
            cout<<fixed<<setprecision(2)<<b/c<<endl;
            return 0;
        }

        b=b+a;

    }

}

