#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i =0; i<n;i++){
        int loop =1;
        for(int j =0 ; j<i+1; j++){
            cout << loop<<" ";
            loop++;
        }
        cout<< endl;
    }
    return 0;
}