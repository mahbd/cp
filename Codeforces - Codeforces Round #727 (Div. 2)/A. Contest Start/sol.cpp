#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
 
int main() {
    fast_input;
    tc() {
        ll n, t, x;
        cin >> n >> t >> x;
        ll maxD = min(x / t, n);
        ll ans = (n - maxD) * maxD + maxD * (maxD - 1) / 2;
        cout << ans << '\n';
    }
    return 0;
}
