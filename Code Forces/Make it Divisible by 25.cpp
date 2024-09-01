//https://codeforces.com/problemset/problem/1593/B

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
    string s; cin>>s;
    
    long long n=s.size();
    
    long long ans=n;
    
    for(long long i=0;i<n;i++){
      
      for(long long j=i+1;j<n;j++){
        int num=(s[i]-'0')*10+(s[j]-'0');
        
        if(num%25==0){
          
          ans=min(ans,(j-i-1)+(n-j-1));
          
        }
        
      }
    }
     
     cout<<ans<<endl;
     
     
     
   }
}

//https://www.youtube.com/watch?v=NQG8QpkLXG8
