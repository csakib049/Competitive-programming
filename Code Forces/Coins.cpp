//https://codeforces.com/contest/1814/problem/A

//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\
 

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
 

int main(){
  
  optimize();
  long long t; cin>>t;
  while(t--){
    long long n,k; cin>>n>>k;
    
    if ((n%2==0) || ((n%2==1)&&(k%2==1))){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
    
  }
  
  
}
