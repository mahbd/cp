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
        ll k = 1;
        while (2 * k < n) {
            k *= 2;
        }

        for (int i = k - 1; i >= 0; i--) {
            cout << i << " ";
        }
        for (int i = k; i < n; i++) {
            cout << i << " ";
        }
        cout << endl;

    }
    return 0;
}
