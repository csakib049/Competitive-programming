//https://codeforces.com/problemset/problem/1837/B

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
    string s; cin>>s;
    
    int cnt=0,MX=0;
    for(int i=1;i<n;i++){
      
      if(s[i]==s[i-1]){
        cnt++;
      }
      else{
         cnt=0;
        
      } 
      MX=max(MX,cnt);  //update
      
    }
    
    cout<<MX+2<<endl;
  }
}
