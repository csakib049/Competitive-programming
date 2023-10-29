/*
Sample Input

2
5
2 2 2 2 2
4
2 2 2 2


Sample Output

YES
NO

https://www.hackerearth.com/problem/algorithm/jiyas-sequence/
*/





#include<bits/stdc++.h>
using namespace std;



int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        long long n,m;

        cin>>n;
        long long digit=1;

        for(int i=0; i<n; i++)
        {
            cin>>m;

            digit=digit*m;





        }

        long long last_digit=digit%10;

        if(last_digit==2 || last_digit==3 || last_digit==5)
        {
            cout<<"YES"<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }


    }

}
