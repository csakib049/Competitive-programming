    //https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

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
     long long a,b,c,d; cin>>a>>b>>c>>d;
      
      long long MUL=(a%100)*(b%100)*(c%100)*(d%100);
      string s=to_string(MUL);
      
     if(MUL>0) cout<<s[s.size()-2]<<s[s.size()-1]<<endl;
     else if(MUL==0)  cout<<"00"<<endl;
      
    }
