#include <bits/stdc++.h>
using namespace std;

void solve(long long n, long long x){
    long long temp = ((n-1)*10)-((n-1)*x);
    if (temp < 0)
        cout << 0 << '\n';
    else
        cout << temp << '\n';
}

void readdata(){
    long long temp1, temp2, n;
    cin >> n;
    for (long long i = 0; i < n; i++){
        cin >> temp1 >> temp2;
        solve(temp1, temp2);
    }
}

int main(){
    readdata();
    return 0;
}
