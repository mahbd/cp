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
        ll l, r, a;
        cin >> l >> r >> a;
        if ((r % a >= ((r / a) * a - 1) % a) || ((r / a) * a - 1 < l)) {
            cout << r % a + r / a << endl;
        } else {
            cout << ((r / a) * a - 1) % a + ((r / a) * a - 1) / a << endl;
        }
    }
    return 0;
}
