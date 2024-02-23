//https://cses.fi/problemset/task/1621

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

    long long n; cin>>n;
    vector<long long>v(n);
    for(long long i=0;i<n;i++)cin>>v[i];

    long long ans=1;
    sort(v.begin(),v.end());
    for(long long i=1;i<n;i++){
        if(v[i]!=v[i-1])ans++;
    }
    cout<<ans<<endl;
}
