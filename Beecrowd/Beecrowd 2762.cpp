//https://judge.beecrowd.com/en/problems/view/2762

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

    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {

        if(s[i]=='.' && s[i+1]!='0' )
        {


            for(int j=i+1; j<s.size(); j++)
            {

                cout<<s[j];
            }

        }
        else if(s[i]=='.' && s[i+1]=='0' )
        {

            for(int j=i+2; j<s.size(); j++)
            {

                cout<<s[j];
            }

        }

    }
    cout<<".";

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='.' )break;
        cout<<s[i];
    }
    cout<<endl;

}



