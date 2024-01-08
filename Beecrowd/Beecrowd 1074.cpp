//https://www.beecrowd.com.br/judge/en/problems/view/1074

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
      cin>>n;

         if(n==0){
            cout<<"NULL"<<endl;
         }else if(n%2==0)
        {
            cout<<"EVEN ";
            if(n<0)
            {
                cout<<"NEGATIVE"<<endl;
            }
            else if(n>0)
            {
                cout<<"POSITIVE"<<endl;
            }

        }
        else if(n%2!=0)
        {
            cout<<"ODD ";
            if(n<0)
            {
                cout<<"NEGATIVE"<<endl;
            }
            else if(n>0)
            {
                cout<<"POSITIVE"<<endl;
            }

        }


    }

        return 0;
}
