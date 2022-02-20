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
        ll sum = arr[0];
        for (ll i = 1; i < n; i++) {
            sum |= arr[i];
        }

        cout << sum << endl;
    }
    return 0;
}
