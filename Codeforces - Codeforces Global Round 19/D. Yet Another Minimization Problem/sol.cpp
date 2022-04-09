#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define fast_input                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)
#define tc()          \
    ll test_case;     \
    cin >> test_case; \
    for (ll tcv = 0; tcv < test_case; tcv++)

int main() {
    fast_input;
    tc() {
        ll n;
        cin >> n;
        vector<ll> arr1(n), arr2(n), knapsack_values(n);
        ll ans = 0, sum_totoal = 0, sum1 = 0, sum2 = 0, max_capacity;
        for (auto &i : arr1) {
            cin >> i;
            sum_totoal += i;
            ans += i * i;
        }
        sum1 = sum_totoal;
        for (auto &i : arr2) {
            cin >> i;
            sum_totoal += i;
            ans += i * i;
        }
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        sum2 = sum_totoal - sum1;
        sum_totoal /= 2;
        if (sum1 > sum2) {
            swap(arr1, arr2);
            swap(sum1, sum2);
        }
        for (ll i = 0; i < n; i++) {
            knapsack_values[i] = arr2[i] - arr1[i];
        }
        max_capacity = sum_totoal - sum1;
        ll dp[max_capacity + 1];
        memset(dp, 0, sizeof(dp));
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j <= knapsack_values[i]; j++) {
                dp[j] = max(dp[j], dp[j - knapsack_values[i]] + knapsack_values[i]);
            }
        }
        cout << dp[max_capacity] << " Max changes" << endl;
        sum1 += dp[max_capacity];
        sum2 -= dp[max_capacity];

        cout << sum1 * sum1 + sum2 * sum2 + ans << endl;
    }
    return 0;
}
