//https://www.beecrowd.com.br/judge/en/problems/view/1145

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i;
    cin>>a>>b;

    for(int i=1; i<=b; i++)
    {
        cout<<i<<" ";

        if(i%a==0)
        {
           cout<<endl;
        }


    }

    cout<<endl;
}
