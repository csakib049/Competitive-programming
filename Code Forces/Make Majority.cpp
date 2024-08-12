//https://codeforces.com/problemset/problem/1988/B
 
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
       int n; cin>>n;
        string s; cin>>s;
 
        int zero=0,one=0;
 
        //count zero
        if(s[0]=='0')zero++;
        for(int i=0;i<n;i++){ 
            if(s[i]=='0' && s[i-1]=='1')zero++;
        }
        
        //count one
        for(int i=0;i<n;i++){
            if(s[i]=='1')one++;
        }
 
        
        if(one>zero)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}
