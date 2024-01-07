//https://www.beecrowd.com.br/judge/en/problems/view/1132

#include<bits/stdc++.h>
using namespace std;

int main(){

     long long x,y,sum=0,temp=0;
     cin>>x>>y;

     if(x>y){
        temp=x;
        x=y;
        y=temp;
        
     }
     
     
      for(int i=x;i<=y;i++){

        if(i%13!=0){

          sum=sum+i;

        }

      }

      cout<<sum<<endl;
}
