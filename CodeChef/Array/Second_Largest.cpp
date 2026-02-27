#include<bits/stdc++.h>
using namespace std;


void solve(){

     
    vector<int>v(3);
    for(int i=0;i<3;i++)cin>>v[i];

    sort(v.begin(),v.end());

    if(v[1]==v[2])cout<<v[0]<<endl;
    else cout<<v[1]<<endl;


}


int main(){
    int t; cin>>t;

    while(t--){
        
        solve();


    }

    return 0;
}