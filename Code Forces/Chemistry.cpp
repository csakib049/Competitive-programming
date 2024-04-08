    //https://codeforces.com/contest/1883/problem/B
   
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
         int n,k; cin>>n>>k; 
          string s; cin>>s;
          map<char,int>mp;
          
          for(int i=0;i<n;i++){
            mp[s[i]]++;
          }
          
          int cnt=0;
          for(auto u:mp){
            if(u.second%2!=0)cnt++; //odd
          }
          
          if(cnt-1<=0)cnt=0;
          else cnt=cnt-1;
          
          if(k>=cnt &&k<=s.size())cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
          
          
          
        }
    }
