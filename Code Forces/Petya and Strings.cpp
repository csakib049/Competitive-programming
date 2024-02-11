//https://codeforces.com/contest/112/problem/A

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


    string s1,s2;
    cin>>s1>>s2;

    for(int i=0;i<s1.size();i++){
        s1[i]=(char)tolower(s1[i]);
    }


    for(int i=0;i<s1.size();i++){
        s2[i]=(char)tolower(s2[i]);
    }

   if(s1==s2){
    cout<<"0"<<endl;
   }else if(s1<s2){
    cout<<"-1"<<endl;
   }else if(s1>s2){
    cout<<"1"<<endl;
   }
}
