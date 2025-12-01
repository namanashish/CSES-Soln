#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int dp(vector<int>& dparray, int n, int curr) {
    if (curr > n) return 0;
    if (curr == n) return 1;

    if (dparray[curr] != -1)
        return dparray[curr];

    long long ways = 0;
    for (int step = 1; step <= 6; step++) {
        ways = (ways + dp(dparray, n, curr + step)) % MOD;
    }

    return dparray[curr] = ways;
}

int main() {
    int n;
    cin >> n;
    vector<int> dparray(n + 1, -1);

    int ans = dp(dparray, n, 0);
    cout << ans;

    return 0;
}
