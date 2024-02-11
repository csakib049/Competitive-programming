//https://codeforces.com/contest/1742/problem/B


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


        set<int> mySet;

    int numElements;

    cin >> numElements;


    for (int i = 0; i < numElements; ++i) {
        int inputValue;
        cin >> inputValue;
        mySet.insert(inputValue);
    }

      cout<<( numElements == mySet.size() ? "YES" : "NO" )<<endl;



    }

}
