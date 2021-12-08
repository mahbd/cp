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
        ll x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;
        if (p1 > p2) {
            p1 = p1 - p2;
            while (x1 <= x2 && p1 > 0) {
                x1 *= 10;
                p1--;
            }
        } else {
            p2 = p2 - p1;
            while (x2 <= x1 && p2 > 0) {
                x2 *= 10;
                p2--;
            }
        }
        if (x1 > x2) {
            cout << ">\n";
        } else if (x1 < x2) {
            cout << "<\n";
        } else {
            cout << "=\n";
        }
    }
    return 0;
}
