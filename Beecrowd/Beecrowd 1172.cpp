//https://www.beecrowd.com.br/judge/en/problems/view/1172

#include<bits/stdc++.h>
using namespace std;

int main(){
    
        int a[10];
        
        for(int i=0;i<10;i++){
            cin>>a[i];
            
        }
        
         for(int i=0;i<10;i++){
            
            if(a[i]==0 || a[i]<0){
                
                a[i]=1;
                
            }
        }
        
         for(int i=0;i<10;i++){
            cout<<"X["<<i<<"] = "<<a[i]<<endl;
        }
}



                    
                    
                    
                    
                    
