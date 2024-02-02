//https://codeforces.com/problemset/problem/1895/A


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
        int x,y,k,diff=0,ans=0;
        cin>>x>>y>>k;

        if(x>y)cout<<x<<endl;

        if(y>x)
        {
            diff=y-x;
            if(diff<=k)
            {
                x=x+diff;
                cout<<x<<endl;
            }
            else if(diff>k)
            {

                ans=(x+k)+(y-(x+k))*2;

                cout<<ans<<endl;


            }
        }
    }
}
