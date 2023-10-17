#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    ll test_case;
    cin >> test_case;
    for (int tcv = 0; tcv < test_case; tcv++) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        ll sum = 0, neg = 0;
        for (auto &i : arr) {
            cin >> i;
            if (i < 0) {
                i *= -1;
                sum += i;
                neg++;
            } else {
                sum += i;
            }
        }
        if (neg % 2) {
            sum -= *min_element(arr.begin(), arr.end()) * 2;
        }
        cout << sum << endl;
    }
    return 0;
}
