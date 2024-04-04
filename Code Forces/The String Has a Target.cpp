    //https://codeforces.com/problemset/problem/1805/B
    
    //================================================================================\\
    //===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
    //================================================================================\\
     
     
    #include<bits/stdc++.h>
    using namespace std;
     
   
    int main()
    {
      int t; cin>>t;
      while(t--){
        int n; cin>>n;
        string s; cin>>s;
        
        char c='z';
        
        for(int i=0;i<n;i++)c=min(c,s[i]);
        
        int index=0;
        for(int i=0;i<n;i++){
          if(c==s[i])index=i;
        }
       
       cout<<c;
       
       for(int i=0;i<n;i++){
          if(index!=i)cout<<s[i];
        }
        
        cout<<endl;
      }
      
       
       
    }
