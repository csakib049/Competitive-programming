//https://codeforces.com/problemset/problem/381/A

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

    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0; i<n; i++)cin>>v[i];

    int Sereja=0, Dima =0,f=1;

    while(!v.empty())
    {
        if(f==1)
        {
            if(v[0]>v[v.size()-1])
            {
                Sereja=Sereja+v[0];
                v.erase(v.begin());
            }
            else
            {
                Sereja=Sereja+v[v.size()-1];
                v.pop_back();
            }

            f=2;

        }
        else if(f==2)
        {
            if(v[0]>v[v.size()-1])
            {
                Dima=Dima+v[0];
                v.erase(v.begin());
            }
            else
            {
                Dima=Dima+v[v.size()-1];
                v.pop_back();
            }
            f=1;
        }
    }

    cout<<Sereja<<" "<<Dima<<endl;

}










