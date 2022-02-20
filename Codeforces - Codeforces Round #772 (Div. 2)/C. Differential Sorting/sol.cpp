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

struct abc {
    ll a, b, c;
};


int main() {
    fast_input;
    tc() {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (auto &i : arr) cin >> i;
        vector<vector<ll>> ans;
        ll minIndex = 0, minIndex2 = 0, minElement = INT64_MAX;
        vector<pair<ll, ll>> minPair(n);
        pair<ll, ll> mm1, mm2;
        for (ll i = n - 1; i > 1; i--) {
            if (mm1.second > arr[i - 1]) {
                mm1.first = i - 1;
                mm1.second = arr[i - 1];
            }
            if (mm2.second < arr[i]) {
                mm2.first = i;
                mm2.second = arr[i];
            }
            minPair[i - 2] = {mm1.first, mm2.first};
        }

        for (ll i = 0; i < n - 2; i++) {
            if (arr[i] > arr[minPair[i].first] - arr[minPair[i].second]) {
                ans.push_back({i + 1, minPair[i].first + 1, minPair[i].second + 1});
                arr[i] = arr[minPair[i].first] - arr[minPair[i].second];
            }
        }
        if (!is_sorted(arr.begin(), arr.end())) {
            cout << -1 << endl;
        } else {
            cout << ans.size() << endl;
            for (auto &i : ans) {
                for (auto &j : i) {
                    cout << j << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
