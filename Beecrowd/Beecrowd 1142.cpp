//https://www.beecrowd.com.br/judge/en/problems/view/1142

#include<bits/stdc++.h>
using namespace std;

int main(){

int a,loop=0;
cin>>a;


for(int i=1;i<=100;i++){

   if(i%4==0){
        loop++;

        cout<<"PUM"<<endl;
        if(loop==a){
            return 0;
         }

        continue;
    }
    cout<<i<<" ";
}

cout<<loop;

}

