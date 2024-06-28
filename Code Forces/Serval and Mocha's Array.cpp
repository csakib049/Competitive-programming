//https://codeforces.com/problemset/problem/1789/A


#include<bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    
    bool ok=false;
    for(int i=0;i<n;i++){
      for(int j=1;j<n;j++){
        
      if(__gcd(v[i],v[j])<=2){
      ok=true;
      break;
      
        }
      }
    }
    
    
    if(ok==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
  }
}
