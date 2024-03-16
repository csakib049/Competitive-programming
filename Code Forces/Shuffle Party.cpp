//https://codeforces.com/problemset/problem/1937/A

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
        int t; cin>>t;
        while(t--){
          long long n; cin>>n;
          int p=1;
          while(p*2<=n)p<<=1;  /*To summarize, the line while(p*2<=n)p<<=1; 
                                efficiently finds the largest power of 2 that
                                is less than or equal to n by repeatedly
                                multiplying p by 2 until it exceeds n.
                                  */
        cout<<p<<endl;

        }
     
}
