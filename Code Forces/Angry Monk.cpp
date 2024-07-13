//https://codeforces.com/contest/1992/problem/B

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
     while(t--){
       int k,n; cin>>k>>n;
       
       vector<int>v(n);
       for(int i=0;i<n;i++)cin>>v[i];
       sort(v.begin(),v.end());
       
       int ans=0;
       for(int i=0;i<n-1;i++){
         
         ans=ans+(2*v[i]-1);
         
       }
       
       cout<<ans<<endl;
       
     }
   
 
}
 
