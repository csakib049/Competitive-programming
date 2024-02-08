//https://codeforces.com/contest/1927/problem/A



    //================================================================================\\
    //===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
    //================================================================================\\
     
     
    #include<bits/stdc++.h>
    using namespace std;
     
    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
    #define mem(a,b) memset(a,b,sizeof(a))
    #define endl "\n"
     
    const int mx=1e4+123;
    char a[mx];
     
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int x,cnt=0,y,z;
             cin>>x;
     
           for(int i=0;i<x;i++)cin>>a[i];
     
           for(int i=0;i<x;i++)
           {
               if(a[i]=='B')
               { y=i;
                   break;
               }
           }
     
           for(int i=x-1;i>=0;i--)
           {
               if(a[i]=='B')
               { z=i;
                   break;
               }
           }
     
     
           for(int i=y;i<=z;i++)cnt++;
     
           cout<<cnt<<endl;
        }
    }
