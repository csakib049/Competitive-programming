//https://codeforces.com/problemset/problem/1665/B

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
    int n; cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }

      //max frequency from map
      int MX_freq=0;
      for(auto u:mp){
          MX_freq=max(MX_freq,u.second);
      }
      
      int ans=0;
      while(MX_freq<n){
          int remain=n-MX_freq;
          int can_add=MX_freq;
          ans++;
          ans=ans+min(remain,can_add);
          MX_freq=MX_freq+min(remain,can_add);
          
      }

     cout<<ans<<endl;
      
  }
  
}
//https://www.youtube.com/watch?v=AxUgto3kzbM
