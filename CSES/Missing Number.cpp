//https://cses.fi/problemset/task/1083


//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\
 
 
#include<bits/stdc++.h>
using namespace std;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a,b,sizeof(a))
#define endl "\n"
 
const int mx=2e5+123;
int a[mx];
 
int main()
{
    optimize();
 
    int n,sum=0,sum2=0;
    cin>>n;
 
    for(int i=0;i<n-1;i++)cin>>a[i];
 
    for(int i=0;i<n-1;i++)sum=sum+a[i];
 
    for(int i=1;i<=n;i++){
 
        sum2=sum2+i;
    }
 
     cout<<sum2-sum<<endl;
 
}
