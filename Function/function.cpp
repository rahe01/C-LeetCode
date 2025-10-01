#include <bits/stdc++.h>
using namespace std;



int sumoneton(int n){

    int count =0;
    for(int i =1; i<=n ;i++){
        count += i;

    }

    return count;
}

int main() {

    int n ;
    cin >> n;
    cout << sumoneton(n) << endl;
    
    return 0;
}