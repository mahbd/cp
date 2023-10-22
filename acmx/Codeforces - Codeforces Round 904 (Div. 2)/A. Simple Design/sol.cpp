#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl '\n'

int digit_sum(ll x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    ll test_case;
    cin >> test_case;
    for (int tcv = 0; tcv < test_case; tcv++) {
        ll x, k;
        cin >> x >> k;
        for (int i = 0;; i++) {
            if (digit_sum(x + i) % k == 0) {
                cout << x + i << endl;
                break;
            }
        }
    }
    return 0;
}
