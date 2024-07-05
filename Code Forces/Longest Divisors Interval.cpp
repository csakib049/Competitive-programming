//https://codeforces.com/problemset/problem/1855/B

//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\
     
     
#include<bits/stdc++.h>
using namespace std;
     
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
     
 int main() {
    optimize();
  int t; cin>>t;
  while(t--){
    long long n; cin>>n;
    
    long long cnt=0;
    for(long long i=1;i<=n;i++){
      
      if(n%i!=0){
        break;
      }
      cnt=i;
      
    }
    
    cout<<cnt<<endl;
    
  }
  
}
