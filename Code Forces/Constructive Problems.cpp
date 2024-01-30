    //================================================================================\\
    //===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
    //================================================================================\\
     
     
    #include<bits/stdc++.h>
    using namespace std;
     
    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
    #define mem(a,b) memset(a,b,sizeof(a))
    #define endl "\n"
     
     
    int main()
    {
        optimize();
    int t;
    cin>>t;
    while(t--){
     
        int a,b;
        cin>>a>>b;
     
        if(a>b){
     
        cout<<a<<endl;
     
        }else if(a<b){
     
            cout<<b<<endl;
     
        }else if(a==b){
     
     
            cout<<a<<endl;
     
        }
    }
     
    }
