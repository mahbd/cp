#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    ll test_case;
    cin >> test_case;
    for (int tcv = 0; tcv < test_case; tcv++) {
        string s;
        cin >> s;
        char prev = '1';
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            char cur = s[i] == '0' ? ('9' + 1) : s[i];
            ans += abs(cur - prev);
            prev = cur;
        }
        cout << ans + 4 << endl;
    }
    return 0;
}
