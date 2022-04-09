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

set<short int> ans;

void divide(const vector<ll> &arr, ll target, ll current, set<short int> taken) {
    if (!ans.empty()) return;
    for (int i = 0; i < arr.size(); i++) {
        if (taken.find(i) == taken.end()) continue;
        if (current + arr[i] == target) {
            taken.insert(i);
            ans = taken;
            return;
        } else if (current + arr[i] < target) {
            taken.insert(i);
            divide(arr, target, current + arr[i], taken);
        }
    }

}

int main() {
    tc() {
        ll n;
        cin >> n;
        vector<ll> arr(n * 2);
        for (ll i = 0; i < n; i++) {
            arr[i] = i + 1;
            cout << i + 1 << " ";
        }
        cout << endl;
        for (ll i = n; i < 2 * n; i++) {
            cin >> arr[i];
        }
        ll sum = accumulate(arr.begin(), arr.end(), 0LL);
        divide(arr, sum, 0LL, set<short int>());
        if (ans.empty()) {
            cout << -1 << endl;
        } else {
            for (auto i : ans) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

    }

    return 0;
}
