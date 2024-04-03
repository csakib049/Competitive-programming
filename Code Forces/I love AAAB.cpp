   //https://codeforces.com/contest/1672/problem/B

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
         string s; cin>>s;
         
         bool sakib=(s[s.size()-1]=='B');
         
         int cnt=0;
         
         for(int i=0;i<s.size();i++){
           if(s[i]=='A')cnt++;
           else cnt--;
           
           if(cnt<0)  sakib=false;
           
         }
          if(sakib==true) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
    }
