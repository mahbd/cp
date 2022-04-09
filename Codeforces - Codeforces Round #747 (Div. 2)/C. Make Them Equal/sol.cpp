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
        char c;
        string s;
        cin >> n >> c >> s;
        bool correct_x = true;
        if (count(s.begin(), s.end(), c) == n) {
            cout << 0 << endl << endl;
            continue;
        }
        for (ll x = 2; x <= n; x++) {
            correct_x = true;
            for (ll i = x - 1; i < n; i += x) {
                correct_x &= s[i] == c;
            }
            if (correct_x) {
                cout << 1 << endl << x << endl;
                break;
            }
        }
        if (!correct_x) {
            cout << 2 << endl << n - 1 << " " << n << endl;
        }
    }
    return 0;
}
