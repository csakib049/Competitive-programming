//https://codeforces.com/contest/1766/problem/A

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
    int ans=0;
    
    while(n){
      ans=ans+min(9,n);
      
      n=n/10;
      
    }
    
    cout<<ans<<endl;
  }

}

