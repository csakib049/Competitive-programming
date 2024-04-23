//https://www.spoj.com/problems/CSUMQ/
 
//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\     
 
#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
 
const long long MX=1e5+123;
long long arr[MX];
long long prefixsum[MX];

int main(){
  
  optimize();
  
  long long n; cin>>n;
  
  for(int i=0;i<n;i++)cin>>arr[i];
  
  long long query; cin>>query;
  
  for(int i=0;i<n;i++)prefixsum[i]=prefixsum[i-1]+arr[i];
  
  for(int i=0;i<query;i++){
    long long a,b; cin>>a>>b;
    
    if(a>b)swap(a,b);
    
    cout<<prefixsum[b]-prefixsum[a-1]<<endl;
    
  }
}
