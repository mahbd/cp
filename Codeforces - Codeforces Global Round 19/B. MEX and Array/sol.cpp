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
        ll ans = 0;
        for (auto &i: arr) cin >> i;
        for (ll i = 0; i < n; i++) {
            for (ll j = i; j < n; j++) {
                ll zero = count(arr.begin() + i, arr.begin() + j + 1, 0);
                ans += zero + (j - i + 1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
