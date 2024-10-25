#include <bits/stdc++.h>
using namespace std;

const long long MAXARR = 1e7+1;
long long n, sotamgiac=0, arr[MAXARR], khoitao = 1;

bool check(int number){
    if (sotamgiac > number)
        return 0;
    while (sotamgiac < number){
        if (number == sotamgiac)
            return 1;
        sotamgiac+=khoitao;
        khoitao++;
    }
    if (sotamgiac == number)
        return 1;
    return 0;
}

void readdata(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
}


void solve(){
    for (int i = 0; i < n; i++){
        if (check(arr[i]))
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
}

int main(){
    readdata();
    solve();
    return 0;
}
