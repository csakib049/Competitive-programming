//https://codeforces.com/problemset/problem/1811/A

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
  
   int SZ,n,index=-1;
   string s;
   
   cin>>SZ>>n>>s;
   
   for(int i=0;i<SZ;i++){
     if(n>(s[i]-48)){ 
       index=i;
       break;
     }
   }
   
   if(index==-1)cout<<s<<n;
   else{
     s.insert(index,to_string(n));
     cout<<s;
   }
   cout<<endl;
  }
  
  
}
