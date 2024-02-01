//https://codeforces.com/problemset/problem/1914/B?csrf_token=02230cb126485d825d72b01285bd29a2


//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\


#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a,b,sizeof(a))
#define endl "\n"


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;

        if(y==0)
        {
            for(int i=x; i>=1; i--)cout<<i<<" ";
        }
        else
        {
            for(int i=x; i>=y+2; i--)
            {
                cout<<i<<" ";
            }

            for(int i=1; i<=y+1; i++)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}
