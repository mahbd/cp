#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    ll test_case;
    cin >> test_case;
    for (int tcv = 0; tcv < test_case; tcv++) {
        ll n;
        string s;
        cin >> n >> s;
        bool ans = false;
        pair<ll, ll> p = {0, 0};
        for (auto c : s) {
            if (c == 'L') {
                p.first--;
            } else if (c == 'R') {
                p.first++;
            } else if (c == 'U') {
                p.second++;
            } else {
                p.second--;
            }
            if (p.first == 1 && p.second == 1) {
                ans = true;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}
