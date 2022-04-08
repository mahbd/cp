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
    tc() {
        printf("Case #%d: ", tcv + 1);
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (auto &i : arr) cin >> i;
        ll prev = 0;
        ll ans = 0;
        for (auto i : arr) {
            if (prev >= i) {
                // case 1: same length but bigger
                if ((int)log10(prev) == (int)log10(i)) {
                    while (i < prev) {
                        i *= 10;
                        ans++;
                    }
                } else {
                    string sPrev = to_string(prev), sI = to_string(i);
                    int stat = 0;
                    for (int i = 0; i < sI.size(); i++) {
                        if (sI[i] > sPrev[i]) {
                            stat = 1;
                            break;
                        } else if (sI[i] > sPrev[i]) {
                            stat = 2;
                            break;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
