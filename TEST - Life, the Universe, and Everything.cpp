/*
TEST - Life, the Universe, and Everything
#basic #tutorial #ad-hoc-1

Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. 
More precisely... rewrite small numbers from input to output. 
Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.

Example

Input:
1
2
88
42
99

Output:
1
2
88

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

   int array[100];


   for(int i=0;i<5;i++){

    cin>>array[i];


   }

   for(int i=0;i<5;i++){

    if(array[i]!=42){

        cout<<array[i]<<endl;
    }else if(array[i]==42){

        break;
    }

   }

}
