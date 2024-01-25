//https://codeforces.com/contest/1850/problem/C


//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\


#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a,b,sizeof(a))
#define endl "\n"

const int mx=1e4;
char a[mx];


int main()
{
    optimize();

    int t;
    cin>>t;
    while(t--){


       for(int i=0;i<64;i++){
          cin>>a[i];
        }


        for(int i=0;i<64;i++){
           if(isalpha(a[i])){

            cout<<a[i];
           }


        }
        cout<<endl;

    }

}
