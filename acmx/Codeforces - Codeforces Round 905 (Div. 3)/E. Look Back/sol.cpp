#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    ll test_case;
    cin >> test_case;
    for (int tcv = 0; tcv < test_case; tcv++) {
        ll n;
        cin >> n;
        vector<ld> arr(n);
        for (auto &i : arr) {
            ll num;
            cin >> num;
            i = log2(num);
        }
        ll ans = 0;
        ll big = 1000'000'000;
        for (int i = 1; i < n; i++) {
            if (arr[i - 1] > arr[i]) {
                ll inc = ceil((ll)((arr[i - 1] - arr[i]) * big) / (ld)big);
                ans += inc;
                arr[i] += inc;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
