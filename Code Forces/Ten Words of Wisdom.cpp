//https://codeforces.com/contest/1850/problem/B

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

const int mx=1e5+123;
int arr1[mx],arr2[mx];

int main()
{

    optimize();


    int t;
    cin>>t;
    while(t--)
    {

        int n,x;
        cin>>n;

        for(int i=0; i<n; i++) cin>>arr1[i]>>arr2[i];
        int boro=0,pos;
        for(int i=0; i<n; i++)
        {
            if(arr1[i]<=10)
            {


                if(arr1[i]<=10)
                {
                    if(boro<arr2[i])
                    {
                        boro=arr2[i];
                        pos=i+1;
                    }

                }

            }
        }

        cout<<pos<<endl;


    }

}
