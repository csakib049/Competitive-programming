//https://codeforces.com/problemset/problem/1807/D

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
  
  long long t; cin>>t;
  while(t--){
   int n; cin>>n;
   int q; cin>>q;
   
   vector<long long>v(n+1);
   for(int i=1;i<=n;i++){
     cin>>v[i];
   
   v[i]=v[i-1]+v[i];   //prefixsum
   }
   
   while(q--){
    long long l,r,k; cin>>l>>r>>k;
    
    long long sum_of_LR=v[r]-v[l-1];
    
    long long cnt=l-r+1;
    
    long long sum=(v[n]-sum_of_LR)+(cnt*k);
    
    
     if(sum%2!=0)cout<<"YES"<<endl; //odd
     else cout<<"NO"<<endl;   //even
      
   }
    
  }
}

//prefixsum
//https://www.youtube.com/watch?v=x7lA94LU4VU
