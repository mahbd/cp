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
        ll ans = 0, prev = arr[0];
        // small to big
        for (ll i = 1; i < n - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                ans++;
                if (i < n - 2) {
                    arr[i + 1] = max(arr[i], arr[i + 2]);
                } else {
                    arr[i + 1] = arr[i];
                }
                
            }
        }
        cout << ans << endl;
        for (auto &i : arr) cout << i << " ";
        cout << endl;
    }
    return 0;
}
