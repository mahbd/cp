#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
 
int main() {
    fast_input;
    tc() {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (auto &i: arr) cin >> i;
        bool already_zero = true, impossible = true;
        for (ll i = 1; i < n - 1; i++) {
            if (arr[i] != 0) {
                already_zero = false;
            }
            if ((arr[i] != 0 && arr[i] % 2 == 0) || (arr[i] > 1 && n > 3)) {
                impossible = false;
            }
        }
        if (already_zero) {
            cout << 0 << endl;
            continue;
        }
        if (impossible) {
            cout << -1 << endl;
            continue;
        }
        ll ans = 0;
        for (ll i = 1; i < n - 1; i++) {
            if (arr[i] != 0) ans += ceil(arr[i] / 2.0);
        }
        cout << ans << endl;
    }
    return 0;
}
