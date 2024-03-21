   //https://codeforces.com/problemset/problem/1890/A
   
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
       map<int, int>mp;
       
       for(int i=0;i<n;i++){
       int x; cin>>x;
       mp[x]++;
       }
        
        if(mp.size()>=3)cout<<"NO"<<endl;
        else{
          if(abs(mp.begin()->second - mp.rbegin()->second)<=1)cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
        }
      }
    }
    
    
    //sakib
