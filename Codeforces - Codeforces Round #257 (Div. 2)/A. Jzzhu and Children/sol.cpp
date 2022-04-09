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
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> arr(n);
    ll pos = 1;
    for (auto &i : arr) {
        cin >> i.first;
        i.second = pos++;
    }
    ll mm = n;
    for (ll i = 0; i < mm; i++) {
        if (arr[i].first > m) {
            mm++;
            arr[i].first -= m;
            arr.push_back(arr[i]);
        }
    }
    // print the last element
    cout << arr[mm - 1].second << endl;
    return 0;
}
