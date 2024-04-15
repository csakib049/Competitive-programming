    //https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

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
       int a,b; char c; cin>>a>>c>>b;
       
      if(c=='>'){
        if(a>b)cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
      }else if(c=='<'){
        if(a<b)cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
      }else if(c=='='){
        if(a==b)cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
      }
    }
