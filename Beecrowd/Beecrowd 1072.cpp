//https://www.beecrowd.com.br/judge/en/problems/view/1072

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,p=0,q=0;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x>=10 && x<=20)
        {
            p++;
        }
        else
        {
            q++;
        }
    }

    cout<<p<<" in"<<endl<<q<<" out"<<endl;

}
