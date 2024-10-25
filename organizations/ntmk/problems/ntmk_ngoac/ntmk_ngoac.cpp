#include <bits/stdc++.h>
using namespace std;

int n, m=0;

void optimize(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}

void generate(int open, int close, string current, int n) {
    if ((int)current.length() == n) {
        cout << current << endl;
        m++;
        return;
    }
    if (open < n / 2){
        generate(open + 1, close, current + "(", n);
    }
    if (close < open) {
            generate(open, close + 1, current + ")", n);
    }
}

void readdata(){
    cin >> n;
}

void solve(){
    generate(0, 0, "", n);
    cout << m;
}

int main() {
    optimize();
    readdata();
    solve();
    return 0;
}
