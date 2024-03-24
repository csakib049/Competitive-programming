//https://codeforces.com/problemset/problem/281/A

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
   
  string s; cin>>s;
 char a=toupper(s[0]);
 cout<<a;
 s.erase(s.begin());
 cout<<s<<endl;                                  
  
}
