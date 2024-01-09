//https://www.beecrowd.com.br/judge/en/problems/view/1099

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;

    while(t--)
    {
       cin>>x>>y;
        if(x>y)
        {
            swap(x,y);
        }
                int odd=0;
            for(int i=x+1; i<y; i++)
            {

                if(i%2!=0)
                {

                    odd+=i;

                }

            }
            cout<<odd<<endl;
        }


    }

