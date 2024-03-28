//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

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
int n=s[0]-'0';
 if(n%2==0)cout<<"EVEN"<<endl;
 else cout<<"ODD"<<endl;
}
