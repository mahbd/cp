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

const ll mod = 998244353;

ll fact(ll n) {
    ll ans = 1;
    for (ll i = 1; i <= n; i++) {
        ans = (ans * i) % mod;
    }
    for (ll i = 1; i <= n; i++) {
        ans = (ans * i) % mod;
    }
    return ans;
}

int main() {
    fast_input;
    tc() {
        ll n;
        cin >> n;
        if (n & 1) {
            cout << 0 << endl;
            continue;
        }
        cout << fact(n / 2) << endl;
    }
    return 0;
}
