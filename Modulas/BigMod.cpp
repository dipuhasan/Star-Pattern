
#include<bits/stdc++.h>
using namespace std;

long mod(long a, long b, long c)
{
    long x;

    if(b==0) return 1;
    if(b%2==0){
      long x = mod(a,b/2,c);
    return x*x%c;
  }
    else
    {
    return (a*mod(a, b-1, c))%c;
    }
}

int main()
{
    long a,b,c;
    cin>>a>>b>>c;
    cout<<mod(a,b,c);

    return 0;
}

Input : 2 3 3
Output: 2
