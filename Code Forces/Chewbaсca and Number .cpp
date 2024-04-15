
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
     string s; cin>>s;
     
     
     if(s.size()==1){
      cout<<s<<endl; 
     }else if(s[0]=='9'){
       for(int i=1;i<s.size();i++){
       if(s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9' ){
         int NUM=s[i]-'0';  // convert into int
         int d=9-NUM;
          s[i]=d+'0'; // convert into string
         }
     }
     cout<<s<<endl;
     
     }else{
     for(int i=0;i<s.size();i++){
       if(s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9' ){
         int NUM=s[i]-'0'; // convert into int
         int d=9-NUM;
          s[i]=d+'0'; // convert into string
         }
     }
     cout<<s<<endl;
      }
    }
    
  
