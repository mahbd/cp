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
        vector<ll> arr(n);
        for (auto &i : arr) cin >> i;
        ll ans = 0;
        for (ll i = 0; i < n - 1; i++) {
            auto min_ele = min_element(arr.begin() + i, arr.end());
            reverse(arr.begin() + i, min_ele + 1);
            ans += min_ele - arr.begin() - i + 1;
        }
        printf("Case #%lld: %lld\n", tcv + 1, ans);
    }
    return 0;
}
