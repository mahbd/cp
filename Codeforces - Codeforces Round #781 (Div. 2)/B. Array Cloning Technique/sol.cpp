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
        map<ll, int> info;
        for (ll i = 0; i < n; i++) {
            ll number;
            cin >> number;
            info[number] += 1;
        }

        ll max_occur = max_element(info.begin(), info.end(),
                                   [](const pair<ll, int> &a, const pair<ll, int> &b) {
                                       return a.second < b.second;
                                   })
                           ->second;
        ll ans = 0;
        while (max_occur < n) {
            ans++;
            ans += min(max_occur, n - max_occur);
            max_occur *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}
