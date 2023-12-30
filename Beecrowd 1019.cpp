//https://www.beecrowd.com.br/judge/en/problems/view/1019

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int N,hour=0,minute=0,second=0;
    cin>>N;
    
    hour=N/3600;
    N=N-(hour*3600);
    
    minute=N/60;
    N=N-(minute*60);
    
    second=N;
    
    cout<<hour<<":"<<minute<<":"<<second<<endl;

}
