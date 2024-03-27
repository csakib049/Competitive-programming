    //https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
    
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
    char a; cin>>a;
    
    if(isdigit(a))cout<<"IS DIGIT"<<endl;
    else if(isupper(a))cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
    else if(islower(a))cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
    }
