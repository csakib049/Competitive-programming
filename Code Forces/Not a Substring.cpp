//https://codeforces.com/problemset/problem/1860/A

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

        if(s=="()"){
            cout<<"NO"<<endl;
           continue;
        }

        bool k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' && s[i+1]=='('){
                k=1;
            }else if(s[i]==')' && s[i+1]==')'){
                k=1;
            }
        }


        string ans;

      if(k==1){
          for(int i=0;i<s.size();i++){
              ans=ans+"()";
          }
      }else{
         for(int i=0;i<s.size();i++)ans=ans+'(';

          for(int i=0;i<s.size();i++)ans=ans+')';
          
      }
        
        cout<<"YES"<<endl;
        cout<<ans<<endl;

    }
}
 
