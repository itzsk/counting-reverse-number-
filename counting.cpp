#include <bits/stdc++.h>
using namespace std;

int print(int n){
    // base case
    if(n == 0){
        return 0;
    }                       // return after print 
    cout << n << endl;      // 5 4 3 2 1 ... 
    print(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << endl;

    print(n);
    return 0;
}