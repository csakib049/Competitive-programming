//https://codeforces.com/contest/2000/problem/A

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

        if(s.size()==2)cout<<"NO"<<endl;
        else if(s[0]!='1' || s[1]!='0')cout<<"NO"<<endl;
        else if(s[2]=='0')cout<<"NO"<<endl;
        else if(s[2]=='1' && s.size()==3)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }
}
 
