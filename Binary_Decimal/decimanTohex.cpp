#include<bits/stdc++.h>
using namespace std;

int main(){
    long int decimal,rem,quotient;
    int i=1,j,temp;
    char hex[1001];
    scanf("%ld",&decimal);
    quotient = decimal;
    while(quotient != 0){
         temp = quotient % 16;
      //To convert integer into character
      if( temp < 10)
           temp = temp + 48;
      else
         temp = temp + 55;

      hex[i++]= temp;
      quotient = quotient / 16;
  }

    for(j = i -1; j>0; j--){
            printf("%c", hex[j]);
    }

    return 0;
}

Input : 10 15 16 31 65535
Output: A  F  10 1F FFFF

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    printf("%X\n", a);

    return 0;
}







