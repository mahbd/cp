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
        map<char, int> m1, m2;
        for (auto c : s) {
            m2[c]++;
        }
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            m1[s[i]]++;
            m2[s[i]]--;
            if (m2[s[i]] == 0) {
                m2.erase(s[i]);
            }
            ans = max(ans, ll(m1.size() + m2.size()));
        }
        cout << ans << endl;
    }

    return 0;
}
