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
    // fast_input;
    tc() {
        printf("Case #%d: ", tcv + 1);
        ll exercise, weights;
        cin >> exercise >> weights;
        vector<vector<pair<ll, ll>>> arr(exercise, vector<pair<ll, ll>>(weights));
        for (ll i = 0; i < exercise; i++) {
            for (ll j = 0; j < weights; j++) {
                cin >> arr[i][j].first;
                arr[i][j].second = j;
            }
        }
        ll ans = accumulate(arr[0].begin(), arr[0].end(), 0LL, [](ll a, pair<ll, ll> b) {
            return a + b.first;
        });
        for (int i = 1; i < exercise; i++) {
            for (int j = 0; j < weights; j++) {
                ans += abs(arr[i - 1][j].first - arr[i][j].first);
            }
        }
        ans += accumulate(arr[exercise - 1].begin(), arr[exercise - 1].end(), 0LL, [](ll a, pair<ll, ll> b) {
            return a + b.first;
        });
        cout << ans << endl;
    }

    return 0;
}
