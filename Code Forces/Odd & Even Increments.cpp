//https://codeforces.com/contest/1669/problem/C


//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\


#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a,b,sizeof(a))
#define endl "\n"

const int mx=1e4+123;
int a[mx];

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,even=0,odd=0,ping=0,ding=0;
        cin>>n;

        for(int i=0; i<n; i++)cin>>a[i];


        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                ping++;
            }
        }


        for(int i=0; i<n; i++)
        {
            if(a[i]%2!=0)
            {
                ding++;
            }
        }







        for(int i=0; i<n; i+=2)
        {
            a[i]=a[i]+1;
        }

        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                even++;
            }
            else if(a[i]%2!=0)
            {
                odd++;
            }
        }




        if(even>0 && odd==0)
        {
            cout<<"YES"<<endl;
        }
        else if(odd>0 && even==0)
        {
            cout<<"YES"<<endl;
        }
        else if(ping==n || ding==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

}
