//https://codeforces.com/problemset/problem/1582/B
 
//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\
 
 
#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define ll long long
 
 
int main()
{
    optimize();
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    
    vector<int>v(n);
    
    int zero=0,one=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
      
      if(v[i]==0)zero++;
      if(v[i]==1)one++;
      
    }
    
    
    long long ans=one*pow(2,zero);
    
    cout<<ans<<endl;
      
    }
    
}

//https://www.youtube.com/watch?v=g7py2QL9ZZ0
