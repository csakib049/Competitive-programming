   //https://codeforces.com/contest/1829/problem/C
   
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
          
          map<string,long long>mp1;
          map<string,long long>mp2;
          
          long long m=100000000,m1=100000000,m2=100000000;
          
          for(int i=0;i<n;i++){
            long long a; string b; cin>>a>>b;
            if(b=="01"){
              m=min(m,a);
              mp1[b]=m;
            }else if(b=="10"){
              m1=min(m1,a);
              mp1[b]=m1;
            }else if(b=="11"){
              m2=min(m2,a);
              mp2[b]=m2;
            }
          }
          
          
         //output
        //---------------------------------------------------------------
          
          if(mp1.size()==2 && mp2.size()==1){
            long long a=mp1["01"]+mp1["10"];
            long long b=mp2["11"];
            cout<<min(a,b)<<endl;
          }else if(mp1.size()==1 && mp2.size()==1){
            cout<<mp2["11"]<<endl;
          }else if(mp1.size()==0 && mp2.size()==1){
            cout<<mp2["11"]<<endl;
          }else if(mp1.size()==2 && mp2.size()==0){
            long long a=mp1["01"]+mp1["10"];
            cout<<a<<endl;
          }else if(mp1.size()==0 && mp2.size()==0){
            cout<<"-1"<<endl;
          }else if(mp1.size()==1 && mp2.size()==0){
            cout<<"-1"<<endl;
          }
          
        //--------------------------------------------------------------
        
        
          
        }
        
    }
