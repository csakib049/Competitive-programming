//https://codeforces.com/problemset/problem/1624/B

//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\
 
 
#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
 
int main()
{
    optimize();

    int t; cin>>t;
    while(t--)
    {   
        int a,b,c;
        cin>>a>>b>>c;

        
        if(b-a==c-b||(a==b&&b==c))
        {
            cout<<"YES"<<endl;
        }
        else if((2*b-c)%a==0&&2*b-c>0)
        {
            cout<<"YES"<<endl;
        }
        else if((2*b-a)%c==0&&2*b-a>0)
        {
            cout<<"YES"<<endl;
        }
        else if((a+c)%(2*b)==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
 //https://www.youtube.com/watch?v=cbs0V6ulBt4
