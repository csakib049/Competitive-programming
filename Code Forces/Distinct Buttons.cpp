//https://codeforces.com/contest/1909/problem/A

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
        while(t--)
        {
            int tt,x,y,u=0,r=0,d=0,l=0;
            cin>>tt;
            while(tt--)
            {
     
                cin>>x>>y;
     
                if( y>0){
                    u++;
                }
     
                if(x>0 ){
                    r++;
                }
     
                if( y<0){
                    d++;
                }
     
                if(x<0){
                    l++;
                }
     
        //-----------------------------
     
            }
     
            if(u>0 && r>0 && d>0 && l>0){
                    cout<<"NO"<<endl;
                }else {
                    cout<<"YES"<<endl;
                }
     
     
        }
     
     
     
     
    }
