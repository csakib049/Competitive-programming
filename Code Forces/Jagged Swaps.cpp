//https://codeforces.com/problemset/problem/1896/A

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
  for(int i=0;i<n;i++)cin>>v[i];

  if(v[0]==1)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
}
