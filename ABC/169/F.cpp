#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main() {
    int n,s;
    cin >> n >> s;

    vector <int> a(n,0);
    for (int i=0; i<n; i++) {
        cin >>a[i];
    }
    vector <vector <long>> dp(n+1,vector<long>(s+1,0));
    dp[0][0] = 1;                // dp[0][0] だけ 1 に

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= s; ++j) {
            (dp[i+1][j] += dp[i][j]) %= MOD;
            if (j >= a[i]) (dp[i+1][j] += dp[i][j-a[i]]) %= MOD;
        }
    }
    cout << dp[n][s] << endl;
    return 0;
}