#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0, tem;
    cin>>n;
    while(n>0)
    {
        tem = n%10;
        n=n/10;
        sum+=tem;
    }
    cout<<sum<<endl;

    return 0;
}

Input: 120

Output: 3
