//https://codeforces.com/contest/1722/problem/A

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

    int t;
    cin>>t;
    while(t--){

        string s="Timur";
        sort(s.begin(),s.end());

        int n;
        cin>>n;  //number of character

        string s1;
        cin>>s1;

        sort(s1.begin(),s1.end());

        cout<<(s==s1 ? "YES" : "NO")<<endl;

    }

}
