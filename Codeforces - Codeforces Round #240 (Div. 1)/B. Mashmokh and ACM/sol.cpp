#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)

const ll mod = 1e9 + 7;
 
int main() {
    fast_input;
    ll n, k;
    cin >> n >> k;
    if (k == 1) {
        cout << n << endl;
        return 0;
    } 
    ll ans = n * (k - 1);
    for (ll i = 2; i <= n; i++) {
        // cout << (ll)(log2(n) / log2(i)) << endl;
        ans = (ans + (k - 1) * (ll)(log2(n) / log2(i))) % mod;
    }
    cout << ans << endl;
    return 0;
}
