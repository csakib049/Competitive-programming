/*

Sample Input:
lBaXps

Sample Output:
0



https://www.hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/



*/


#include<bits/stdc++.h>
using namespace std;

char upper(char c){
   return 'A'+(c-'a');  //lower case -> upper case
}

char lower(char c){
   return 'a'+(c-'A');  //upper case -> lowercase
}

int main(){

string s;
cin>>s;
 for(int i=0;i<s.size();i++){
    if(s[i]>='a'  &&  s[i]<='z'){
        s[i]=upper(s[i]);

    }else if(s[i]>='A'  &&  s[i]<='Z'){
        s[i]=lower(s[i]);

    }
 }

   int result=0;
  for(int i=0;i<s.size();i++){
    if(s[i]>='a'  &&  s[i]<='z'){
        result =result-s[i];

    }else if(s[i]>='A'  &&  s[i]<='Z'){
        result =result+s[i];

    }
 }

if(result<0){

    result=result * (-1);

}
 int flag;

 for(int i=2;i < result;i++){

    if(result%i==0){
        flag=1;
    }else{
        flag=0;
    }
 }


 cout<<flag<<endl;

 }
