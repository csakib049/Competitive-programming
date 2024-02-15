//https://codeforces.com/problemset/problem/1825/A

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
    while(t--)
    {
        string s,p;
        cin>>s;
         int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==s[0])
            {
            cnt++;
            }
        }

        if(cnt==s.size()){
            cout<<"-1"<<endl;
            continue;
        }

      cout<<s.size()-1<<endl;

    }
}
