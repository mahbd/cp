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
        vector<ll> one;
        ll one_cnt = 0;
        for (ll i = n - 1; i >= 0; i--) {
            if (s[i] == '1') {
                one_cnt++;
            } else {
                one.push_back(one_cnt);
            }
        }
        ll i = 0, ans = 0;
        for (; i < one.size(); i++) {
            ans += one[i];
            cout << ans << " ";
        }
        for (; i < n; i++) {
            cout << -1 << " ";
        }
        cout << endl;
    }
    return 0;
}
