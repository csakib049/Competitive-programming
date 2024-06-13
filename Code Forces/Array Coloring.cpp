//https://codeforces.com/problemset/problem/1857/A

//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\
     
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
     

int main(){
  
  int t; cin>>t;
  while(t--){
  int n; cin>>n;
  vector<int>v(n);
  int sum=0;
  for(int i=0;i<n;i++){
    cin>>v[i];
  sum=sum+v[i];
  }
  
  if(sum%2==0)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
}
