//https://www.beecrowd.com.br/judge/en/problems/view/1079

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    float a,b,c,p=0;
    cin>>t;

    while(t--){
        cin>>a>>b>>c;
            p=(a*2+b*3+c*5)/10;
        cout<<fixed<<setprecision(1)<<p<<endl;

    }
}
