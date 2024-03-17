    //https://codeforces.com/problemset/problem/1941/C
    
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
         
         int ting=0;
         for(int i=0;i<n;i++){
           if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p')ting++; //map
           
          if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e')ting++; //pie
          
          if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p'  && s[i+3]=='i' && s[i+4]=='e' )ting--; //mapie

         }
         cout<<ting<<endl;
       }
    }
