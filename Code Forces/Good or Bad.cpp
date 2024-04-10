    //https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
    
    
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
        int ting=0;
        
        for(int i=2;i<s.size();i++){
          if(s[i-2]=='0' && s[i-1]=='1' && s[i]=='0')
          {
             ting=1;
             break;
        }else if(s[i-2]=='1' && s[i-1]=='0' && s[i]=='1')
        {
              ting=1;
              break;
        }else{
          ting=0;
        }
    }
    
  if(ting==1)cout<<"Good"<<endl;
   else cout<<"Bad"<<endl;
 

      }
 
    }
