#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    ll test_case;
    cin >> test_case;
    for (int tcv = 0; tcv < test_case; tcv++) {
        ll n, k;
        string s;
        cin >> n >> k >> s;
        int m[26] = {0};
        for (int i = 0; i < n; i++) {
            m[s[i] - 'a']++;
        }
        int to_remove = 0;
        for (int i = 0; i < 26; i++) {
            to_remove += m[i] % 2;
        }
        if (to_remove > 0) {
            to_remove--;
        }
        if (to_remove > k) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
