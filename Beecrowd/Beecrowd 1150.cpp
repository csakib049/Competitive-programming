//https://www.beecrowd.com.br/judge/en/problems/view/1150

#include<bits/stdc++.h>
using namespace std;

int main(){

int x,y,sum=0,c=1;
cin>>x;

while(1){
    if(y>x){

        break;
    }else {

      cin>>y;
    }
}

for(int i=x;i<y ;i++){

    sum+=i;

    if(sum<y){
        c++;
    }
}
 cout<<c<<endl;
}
