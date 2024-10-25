#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    cout << 2 * (n - 1) << endl;
}

void readdata(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        solve(n);
    }
}


int main() {
    readdata();
    return 0;
}
