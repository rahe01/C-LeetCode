#include <bits/stdc++.h>
using namespace std;


int digit(int n){

    int digSum =0;

   while(n>0){
    int lastDigit = n%10;
    n /=10;

    digSum+= lastDigit;
   }

   return digSum;
}


int main() {
    
    int n;

    cin >> n;

    cout <<digit(n) <<endl;
    return 0;
}