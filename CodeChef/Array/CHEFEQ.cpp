#include<bits/stdc++.h>
using namespace std;


void solve(){

    int n; cin>>n;
  
    map<int,int>mp;

    int MX=INT_MIN;

    for(int i=0;i<n;i++){
        int x; cin>>x;
        mp[x]++;

        MX=max(MX,mp[x]);
    }

    

   cout<<n-MX<<endl;
    
}


int main(){
    int t; cin>>t;

    while(t--){
        
        solve();


    }

    return 0;
}