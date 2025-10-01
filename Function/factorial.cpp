#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int count = 1;

    for(int i=1; i<=n; i++){
        count *=i;
    }

    return count;
}




int main() {

    int n;
    cin>> n;

    cout << fact(n) <<endl;
    
    return 0;
}