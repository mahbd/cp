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
const long MAX = 1000000000;

int main() {
    fast_input;
    tc() {
        ll n, s = 1;
        cin >> n;
        if (n > 19) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl << s;
        for (ll i = 1; i < n; i++) {
            s = s * 3;
            cout << " " << s;
        }
        cout << endl;
    }
    return 0;
}
