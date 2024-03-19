    //https://codeforces.com/contest/4/problem/C
     
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
       int t,freq=0; cin>>t; 
       map<string ,bool>mp;
        map<string ,int>mp1;
       while(t--){
        
         string s; cin>>s;
       mp1[s]++;
        
        
         if(mp[s]==1)cout<<s<<mp1[s]-1<<endl;
         else cout<<"OK"<<endl;
         mp[s]=1;

       }
    }
