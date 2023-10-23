/*Problem

You're given an integer N. Write a program to calculate the sum of all the digits of N.
Input Format

The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.
Output Format

For each test case, calculate the sum of digits of N, and display it in a new line.
Constraints

    1≤T≤10001≤T≤1000
    1≤N≤10000001≤N≤1000000

Sample 1:
Input:
3 
12345
31203
2123
output:
15
9
8
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t;

    cin>>t;

    while(t--)
    {
        int last_digit=0,digit_sum=0;
        cin>>n;

        while(n>0)
        {
            last_digit=n%10;

            digit_sum=digit_sum+last_digit;

            n=n/10;
        }

        cout<<digit_sum<<endl;


    }
}






