//https://www.beecrowd.com.br/judge/en/problems/view/1065

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a[5],t=0;
    
    for(int i=0;i<5;i++)cin>>a[i];
    
    for(int i=0;i<5;i++){
        if(a[i]%2==0){
            t++;
        }
        
    }
    cout<<t<<" valores pares"<<endl;

}
