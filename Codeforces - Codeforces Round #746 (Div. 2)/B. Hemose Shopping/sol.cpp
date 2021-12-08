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
        ll n, x;
        cin >> n >> x;
        vector<ll> arr(n);
        for (auto &i : arr) {
            cin >> i;
        }
        if (n >= 2 * x) {
            cout << "YES" << endl;
        } else {
            vector<ll> arr2 = arr;
            sort(arr2.begin(), arr2.end());
            bool sortable = true;
            for (ll i = n - x; i < x; i++) {
                sortable = sortable && (arr[i] == arr2[i]);
            }
            if (sortable) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
