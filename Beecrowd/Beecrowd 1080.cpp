//https://www.beecrowd.com.br/judge/en/problems/view/1080

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a[100],max=0,position;
    
    for(int i=0;i<100;i++){
        cin>>a[i];
    }
    
    max=0;
    for(int i=0;i<100;i++){
      if(max<a[i]){
          
          max=a[i];
          position=i+1;
      }
    }
    
    cout<<max<<endl<<position<<endl;
    
}
