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
        cout << "Case #" << tcv + 1 << ": ";
        vector<ll> one(4), two(4), three(4);
        for (auto &i : one) cin >> i;
        for (auto &i : two) cin >> i;
        for (auto &i : three) cin >> i;
        ll a, b, c, d, needed = 1000000;
        a = min(one[0], min(two[0], three[0]));
        b = min(one[1], min(two[1], three[1]));
        c = min(one[2], min(two[2], three[2]));
        d = min(one[3], min(two[3], three[3]));
        if (a + b + c + d < needed) {
            cout << "IMPOSSIBLE" << endl;
        } else {
            cout << min(a, needed) << " ";
            needed -= min(a, needed);
            cout << min(b, needed) << " ";
            needed -= min(b, needed);
            cout << min(c, needed) << " ";
            needed -= min(c, needed);
            cout << min(d, needed) << endl;
        }
    }
    return 0;
}
