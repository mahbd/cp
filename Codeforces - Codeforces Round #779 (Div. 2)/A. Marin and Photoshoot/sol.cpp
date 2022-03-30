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
        string s;
        cin >> n >> s;
        ll ans = 0;
        for (ll i = 1; i < n; i++) {
            if (s[i] == '0' && s[i - 1] == '0') {
                ans += 2;
            } else if (s[i] == '1' && s[i - 1] == '0' && i < n - 1 && s[i + 1] == '0') {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
