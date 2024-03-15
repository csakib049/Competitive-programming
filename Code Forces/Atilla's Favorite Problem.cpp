   //https://codeforces.com/contest/1760/problem/B
   
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
          string s,s1="0abcdefghijklmnopqrstuvwxyz";
          cin>>s;
          sort(s.begin(),s.end());
          
          
          for(int i=0;i<=26;i++){
            if(s1[i]==s[s.size()-1]){
              cout<<i<<endl;
              
            }
            
          }
        }
    }
