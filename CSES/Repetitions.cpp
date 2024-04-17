//https://cses.fi/problemset/task/1069
 
//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\
 
 
#include<bits/stdc++.h>
using namespace std;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a,b,sizeof(a))
#define endl "\n"
 
 
int main()
{
    optimize();
 
 string s; cin>>s;
 int cnt=1;  // count korar jonno 
 int MX=0;  // MAX er jonno 
 
 for(int i=1;i<s.size();i++){
   if(s[i]!=s[i-1]){
     
     MX=max(MX,cnt);
     cnt=1;
   }else cnt++;
 }
 MX=max(MX,cnt);
 
 cout<<MX<<endl;
}
