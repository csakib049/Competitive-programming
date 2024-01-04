//https://codeforces.com/problemset/problem/71/A

//Task 3:
#include<bits/stdc++.h>
using namespace std;

int main(){
int p;
string s;

cin>>s;

if(s.size()<10){

	cout<<s<<endl;
}if(s.size()>=10){

cout<<s[0];

cout<<s.size()-2;
cout<<s[s.length()-1]<<endl;

   }

}
