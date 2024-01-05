//https://www.beecrowd.com.br/judge/en/problems/view/1071

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,sum=0;

    cin>>a>>b;

    for(int i=b+1; i<a; i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;   //odd
        }
    }

    cout<<sum<<endl;

}
