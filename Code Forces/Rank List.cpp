     //https://codeforces.com/problemset/problem/166/A
   
    //================================================================================\\
    //===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
    //================================================================================\\
     
     
    #include<bits/stdc++.h>
    using namespace std;
     
    #define endl "\n"
    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
     
     
     bool cmp(pair<int,int>p1 , pair<int,int>p2){
       
       if(p1.first>p2.first)return 1;
       else if(p1.first==p2.first && p1.second<p2.second)return 1;
       else return 0;
       
     }
     
     
    int main()
    {
        optimize();
       int t; cin>>t;
       int n; cin>>n;
       
       vector<pair<int,int>>v(t);
       
       for(int i=0;i<t;i++)cin>>v[i].first>>v[i].second;
       
      int cnt=0;
      sort(v.begin(),v.end(),cmp);
    
      for(int i=0;i<t;i++){
       if(v[i].first == v[n-1].first && v[i].second==v[n-1].second)cnt++;
      }
      
    cout<<cnt<<endl;
       
    }
