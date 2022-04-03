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
        vector<ll> arr(n);
        for (auto &i: arr) cin >> i;
        ll ans = 0, tem_ans = 0;
        for (auto i: arr) {
            tem_ans += i;
            if (tem_ans > 0) {
                ans += tem_ans;
                tem_ans = 0;
            }
        }
        ll m;
        cin >> m;
        vector<ll> arr2(m);
        for (auto &i: arr2) cin >> i;
        ll tem_ans2 = 0;
        for (auto i: arr2) {
            tem_ans2 += i;
            if (tem_ans2 > 0) {
                ans += tem_ans2;
                tem_ans2 = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
