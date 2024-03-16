    //https://codeforces.com/contest/1722/problem/B

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
          int n,ting=0; cin>>n;
          string s1,s2;
          cin>>s1>>s2;
          
          for(int i=0;i<n;i++){
            if(s1[i]=='R' && s2[i]=='R' )ting++;
            if(s1[i]=='G' && s2[i]=='G' || s1[i]=='G' && s2[i]=='B')ting++;
            if(s1[i]=='B' && s2[i]=='B' || s1[i]=='B' && s2[i]=='G')ting++;
            
          }
          
          if(ting==s1.size())cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
          
        }
    }
