//https://codeforces.com/contest/1878/problem/A


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
int a[mx];

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){

        int n,k,found=0;

        cin>>n>>k;

        for(int i=0;i<n;i++)cin>>a[i];

        for(int i=0;i<n;i++){
            if(a[i]==k){
                found=1;
                break;
            }

        }

        if(found==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}
