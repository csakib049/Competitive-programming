     //https://codeforces.com/problemset/problem/616/A

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
    string s1,s2,s3,s4; cin>>s1>>s2;
    
    s3=string(s2.size(),'0')+s1;
    s4=string(s1.size(),'0')+s2;
    
     if(s3>s4)cout<<">"<<endl;
     else if(s3<s4)cout<<"<"<<endl;
     else if(s3==s4)cout<<"="<<endl;
     
}
    
    
