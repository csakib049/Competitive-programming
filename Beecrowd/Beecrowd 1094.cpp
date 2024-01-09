//https://www.beecrowd.com.br/judge/en/problems/view/1094

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,x,sum=0;
    float sum1=0,sum2=0,sum3=0;

    char y;
    cin>>t;

    while(t--){
        cin>>x;
        cin>>y;
         sum+=x;

         if(y=='C'){
             sum1+=x;

         }else if(y=='R'){
             sum2+=x;

         }else if(y=='S'){
             sum3+=x;

         }

    }


    cout<<"Total: "<<sum<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<sum1<<endl;
    cout<<"Total de ratos: "<<sum2<<endl;
    cout<<"Total de sapos: "<<sum3<<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<((sum1*100)/sum)<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<((sum2*100)/sum)<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<((sum3*100)/sum)<<" %"<<endl;


}
