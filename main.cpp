#include <bits/stdc++.h>

#define pb push_back
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, w;
    cin >> n >> w;
    vector<int> v(n);
    for (auto &el : v) {
        cin >> el;
    }
    vector<vector<int>> dp(n + 1, vector<int>(w + 1));
    for (int i = 1 ; i <= n ; i++) {
        for (int j = 0 ; j <= w ; j++) {
            if (j - v[i - 1] >= 0) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i - 1]] + v[i -1]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][w];
}

