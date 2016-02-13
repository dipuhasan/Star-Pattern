#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
 char str[100];
 int len[100],big,c;
   while(1){
     big = -1;
     cin>>n;
     for(int i=0;i<n;i++) {
        cin>>str;
         c  =  strlen(str);
        if(big<c) big = c;
      }
    cout<<big<<endl;

   }


return 0;

}

Input: 
3
abc
abcde
asd

Output: 5
