    //https://www.spoj.com/problems/RPLD/
  
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
         for(int i=0;i<t;i++){
           int a,b; cin>>a>>b;
           
           map<pair<int,int>,bool>mp;
           
           bool vis=1;
           for(int i=0;i<b;i++){
             int c,d;
             cin>>c>>d;
             
             if(mp[{c,d}])vis=0;   //if visited
             
             mp[{c,d}]=1;
             
           }
           
           if(vis==1)cout<<"Scenario #"<<i+1<<": possible"<<endl;
           else cout<<"Scenario #"<<i+1<<": impossible"<<endl;
           
         }
    }
    
//sakib
