#include <bits/stdc++.h>
using namespace std;

const int MAXARR = 101;
int n, m, w[MAXARR], v[MAXARR];

void solve(){
    int dp[MAXARR][MAXARR];
    memset(dp,0,sizeof(dp));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
                dp[i][j] = dp[i-1][j];
                if (j >= w[i])
                    dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]]+v[i]);
        }
    }
    cout << dp[n][m];
}

void readdata(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> w[i] >> v[i];
    }
}

int main(){
    readdata();
    solve();
    return 0;
}
