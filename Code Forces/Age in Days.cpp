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
        int n; cin>>n;
        int y,m,d;
        
        y=n/365;
        
        m=(n%365)/30;
        
        d=(n%365)%30;
        
        
        cout<<y<<" years"<<endl;
        cout<<m<<" months"<<endl;
        cout<<d<<" days"<<endl;
        
        
        
    }
