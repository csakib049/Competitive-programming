//https://www.beecrowd.com.br/judge/en/problems/view/1143

#include<bits/stdc++.h>
using namespace std;

int main(){

int a,b=0;
cin>>a;

for(int i=1;;i++){
    b++;
    cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
  
    if(b==a){
        return 0;
    }
}

}

