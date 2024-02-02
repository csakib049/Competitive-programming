//https://codeforces.com/problemset/problem/1783/A


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

   int t,i;
   cin>>t;
   while(t--){


    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    if(a[0]==a[n-1]){
    cout<<"NO"<<endl;
    }else {
    cout<<"YES"<<endl;
    cout<<a[0]<<" ";
    for(int i=n-1;i>0;i--)cout<<a[i]<<" ";
    cout<<endl;

    }
   }
}
