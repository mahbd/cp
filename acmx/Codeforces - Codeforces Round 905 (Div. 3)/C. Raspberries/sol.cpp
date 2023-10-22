#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl '\n'

vector<ll> arr;

int count_divisors(int k) {
    int ans = 0;
    for (auto i : arr) {
        if (i % k == 0) {
            ans++;
        }
    }
    return ans;
}

int count_extra_divisors(int extra, int k) {
    int ans = 0;
    for (auto i : arr) {
        if ((i + extra) % k == 0) {
            ans++;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    ll test_case;
    cin >> test_case;
    for (int tcv = 0; tcv < test_case; tcv++) {
        ll n, k;
        cin >> n >> k;
        arr.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (k == 4) {
            int cnt2 = count_divisors(2);
            int cnt4 = count_divisors(4);
            if (cnt2 >= 2 || cnt4 >= 1) {
                cout << 0 << endl;
            } else if (cnt2 == 1) {
                cout << 1 << endl;
            } else if (count_extra_divisors(1, 4)) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        } else if (k == 2) {
            int cnt2 = count_divisors(2);
            if (cnt2 >= 1) {
                cout << 0 << endl;
            } else {
                cout << 1 << endl;
            }
        } else if (k == 3) {
            int cnt3 = count_divisors(3);
            if (cnt3 >= 1) {
                cout << 0 << endl;
            } else if (count_extra_divisors(1, 3)) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        } else if (k == 5) {
            int cnt5 = count_divisors(5);
            if (cnt5 >= 1) {
                cout << 0 << endl;
            } else if (count_extra_divisors(1, 5)) {
                cout << 1 << endl;
            } else if (count_extra_divisors(2, 5)) {
                cout << 2 << endl;
            } else if (count_extra_divisors(3, 5)) {
                cout << 3 << endl;
            } else {
                cout << 4 << endl;
            }
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
