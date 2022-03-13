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
        string ans1, ans2;
        ll sum1 = 0, sum2 = 0;
        bool prev = false;
        for (ll i = 0; i < n; i++) {
            if (prev) {
                ans1 += '1';
                sum1 += 1;
                ans2 += '2';
                sum2 += 2;
            } else {
                ans1 += '2';
                sum1 += 2;
                ans2 += '1';
                sum2 += 1;
            }
            if (sum1 == n) {
                cout << ans1 << endl;
                break;
            } else if (sum2 == n) {
                cout << ans2 << endl;
                break;
            }
            prev = !prev;
        }
    }
    return 0;
}
