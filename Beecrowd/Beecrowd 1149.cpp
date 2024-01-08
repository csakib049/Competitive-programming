//https://www.beecrowd.com.br/judge/en/problems/view/1149

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x,a,sum=0;
    
    cin>>x;
    p:
    cin>>a;
    
    if(a<0 || a==0){
        
        goto p;
    }
    
    for(int i=1;i<=a;i++){
    
    sum=sum+x;
    x++;
    }
    
    cout<<sum<<endl;
}
