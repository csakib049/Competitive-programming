//https://cses.fi/problemset/task/1068

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

    long long n=0;
    cin>>n;
    cout<<n<<" ";
    while(n!=1)
    {

        if(n%2==0)
        {

            n=n/2;

            cout<<n<<" ";

        }
        else if(n%2!=0)
        {

            n=(n*3)+1;

            cout<<n<<" ";
        }
    }
}
