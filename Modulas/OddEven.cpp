
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tem, n, sum=0;
    cin>>n;
    while(n>0)
    {
         tem = n%10;
        n/=10;
        //sum+=tem;
     cout<<tem<<' ';
     if(tem%2==0)
        cout<<"Even"<<endl;
    else

        cout<<"ODD"<<endl;

    }
    return 0;
}

Input:
123456789
Output:
1 ODD
2 EVEN
3 ODD
4 EVEN
5 ODD
6 EVEN
7 ODD
8 EVEN
9 ODD
