//https://codeforces.com/problemset/problem/1929/A

//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\


#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx=1e4+123;
int a[mx];


int main()
{
    optimize();
        int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int sum=0;
        for(int i=1;i<n;i++){
            sum=sum+(a[i]-a[i-1]);
        }
        cout<<sum<<endl;
    }
}
