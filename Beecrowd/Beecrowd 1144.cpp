//https://www.beecrowd.com.br/judge/en/problems/view/1144

#include<bits/stdc++.h>
using namespace std;

int main(){

int a,b=0;
cin>>a;

for(int i=1;;i++){
    b++;
    cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
    cout<<i<<" "<<(i*i)+1<<" "<<(i*i*i)+1<<endl;
    if(b==a){
        return 0;
    }
}

}

