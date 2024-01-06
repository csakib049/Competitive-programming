//https://www.beecrowd.com.br/judge/en/problems/view/1101

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int x,y,sum=0,temp=0;
    cin>>x>>y;

    temp=x;
    x=y;
    y=temp;

    if(x<=0 || y<=0){

        return 0;
    }else{

    for(int i=x; i<=y; i++)
    {
        cout<<i<<" ";
        sum=sum+i;

    }
    cout<<"Sum="<<sum<<endl;
    }
}
