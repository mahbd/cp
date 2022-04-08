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
        vector<ll> arr1(n), arr2(n);
        for (auto &i : arr1) cin >> i;
        for (auto &i : arr2) cin >> i;
        ll ans2 = abs(arr1[0] - arr2[0]) + abs(arr1[n - 1] - arr2[n - 1]);
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        ll ans = 0, index = 0;
        for (ll i = 0; i < n; i++) {
            ll tem_ans = INT64_MAX;
            bool worked = false;
            while ()
        }
        cout << min(ans, ans2) << "\n";
    }
    return 0;
}
