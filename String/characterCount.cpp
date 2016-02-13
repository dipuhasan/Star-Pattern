
#include<bits/stdc++.h>
using namespace std;

int main()
{

    char searching = '\0';
    string sen="";
    cout<<sen;
    int c = 0;
    getline(cin, sen);
    cin>>searching;

    for(int i=0; i<sen.length(); i++)
    {
        if(sen[i] == searching){
        c++;
        }
    }
    cout<<c<<endl;

    return 0;
}

Input: abcdea
search: a

Ouput: 2
