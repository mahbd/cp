#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl '\n'

ll digit_sum(ll n) {
    ll sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    ll test_case;
    cin >> test_case;
    for (int tcv = 0; tcv < test_case; tcv++) {
        ll n, q;
        cin >> n >> q;
        vector<ll> arr(n);
        set<ll> active;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] > 9) {
                active.insert(i);
            }
        }
        while (q--) {
            ll t;
            cin >> t;
            if (t == 1) {
                ll l, r;
                cin >> l >> r;
                l--, r--;
                auto it = active.lower_bound(l);
                auto it2 = active.upper_bound(r);
                vector<ll> to_erase;
                while (it != it2) {
                    ll x = *it;
                    arr[x] = digit_sum(arr[x]);
                    if (arr[x] <= 9) {
                        to_erase.push_back(x);
                    }
                    it++;
                }
                for (auto x : to_erase) {
                    if (active.count(x)) {
                        active.erase(x);
                    }
                }
            } else {
                ll x;
                cin >> x;
                cout << arr[x - 1] << endl;
            }
        }
    }
    return 0;
}
