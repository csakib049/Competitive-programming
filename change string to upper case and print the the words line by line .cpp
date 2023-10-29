/*

input: sakib is a good boy

output: SAKIB IS A GOOD BOY

*/


/*

input: sakib is a good boy

output: SAKIB IS A GOOD BOY

https://www.hackerearth.com/problem/algorithm/capitalbaazi/

*/


#include<bits/stdc++.h>
using namespace std;

char upper(char c ){
  return 'A'+(c-'a');
}

int main(){

while(true){
    string s ;
    cin>>s;
    
    for(int i=0;i<s.size();i++){

        s[i]=upper(s[i]);

    }
    if(s.size()==0){

        break;
    }


    cout<<s<<endl;

}

}
