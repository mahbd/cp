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
        ll n, m;
        cin >> n >> m;
        vector<string> a(n);
        for (auto &i : a) cin >> i;
        if (n == 1 || m == 1) {
            cout << "YES\n";
            continue;
        }
        bool pos = true;
        for (ll i = 0; i < n - 1; i++) {
            for (ll j = 0; j < m - 1; j++) {
                int one = 0;
                if (a[i][j] == '1') one++;
                if (a[i][j + 1] == '1') one++;
                if (a[i + 1][j] == '1') one++;
                if (a[i + 1][j + 1] == '1') one++;
                if (one == 3) {
                    pos = false;
                    break;
                }
            }
            if (!pos) break;
        }
        pos ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
