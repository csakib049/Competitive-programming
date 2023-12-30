//https://www.beecrowd.com.br/judge/en/problems/view/1013
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a>b && a>c){
        cout<<a<<" eh o maior"<<endl;
    }else  if(b>a && b>c){
        cout<<b<<" eh o maior"<<endl;
    }else  if(c>a && c>b){
        cout<<c<<" eh o maior"<<endl;
    }    
    
}


*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, major, MaiorAB;
    
    cin >> a >> b >> c;
    
    MaiorAB = (a + b +abs(a - b)) / 2;
    major = (MaiorAB + c +abs(MaiorAB - c)) / 2;
    
   cout << major << " eh o maior" <<endl;

    return 0;
}
