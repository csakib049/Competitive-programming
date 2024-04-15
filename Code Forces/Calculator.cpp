    //https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

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
   
   string s,s1,s2; cin>>s;
   int INDEX;
   
   for(int i=0;i<s.size();i++){
     if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
       INDEX=i; break;
     }else s1=s1+s[i];
   }
   
   for(int i=INDEX+1;i<s.size();i++)s2=s2+s[i];
   
   int M1=stoi(s1); //convert string into int
   int M2=stoi(s2); //convert string into int
   
   if(s[INDEX]=='+')cout<<M1+M2<<endl;
   else if(s[INDEX]=='-')cout<<M1-M2<<endl;
   else if(s[INDEX]=='*')cout<<M1*M2<<endl;
   else if(s[INDEX]=='/')cout<<M1/M2<<endl;
   
    }
