#include<bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;
  while(t--){
   string s; cin>>s;
   
   int ting=0;
   for(int i=1;i<s.size();i++){
     if(s[i]!=s[i-1]){
       swap(s[i],s[i-1]);
       ting =1;
     }
   }
    
    if(ting==1)cout<<"YES"<<endl<<s<<endl;
    else cout<<"NO"<<endl;
    
    
  }
}
