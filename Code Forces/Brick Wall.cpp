//https://codeforces.com/problemset/problem/1918/A

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
    int n,m;
    cin>>n>>m;
    int l=floor(m/2);
    int x=n*l;

    cout<<x<<endl;


}

}
