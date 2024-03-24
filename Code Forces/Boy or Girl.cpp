//https://codeforces.com/problemset/problem/236/A

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

sort(s.begin(),s.end());

int SZ=unique(s.begin(),s.end())-s.begin();

  if(SZ%2==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

}
