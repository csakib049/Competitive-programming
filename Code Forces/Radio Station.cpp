    //https://codeforces.com/contest/918/problem/B
  
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
        
        int n,m; cin>>n>>m;
        
        map<string, string>mp;
        for(int i=0;i<n;i++){
          string name,ip;
          cin>>name>>ip;
          
          mp[ip]=name;
        }
        
        for(int i=0;i<m;i++){
          string name1,ip;
          cin>>name1>>ip;
          
          ip.pop_back();
          
          cout<<name1<<" "<<ip<<"; #"<<mp[ip]<<endl;
        }
    }
    
//sakib
