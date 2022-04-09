#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define tc()          \
    ll test_case;     \
    cin >> test_case; \
    for (ll tcv = 0; tcv < test_case; tcv++)

int main() {
    tc() {
        ll n;
        cin >> n;
        if (n == -1) {
            return 0;
        }
        vector<ll> arr(n * 2);
        for (ll i = 0; i < min(30LL, n); i++) {
            arr[i] = (ll) pow(2, i);
            cout << arr[i] << " ";
        }
        for (int i = 30; i < n; i++) {
            cout << 1000000000 - i + 30 << " ";
            arr[i] = 1000000000 - i + 30;
        }
        cout << endl;
        for (ll i = n; i < 2 * n; i++) {
            cin >> arr[i];
        }
        ll sum = accumulate(arr.begin(), arr.end(), 0LL);
        sum /= 2;
        int pos = 0;


        while(sum > 1000000000 - pos && pos < 70) {
            cout << 1000000000 - pos << " ";
            pos++;
            sum -= 1000000000 - pos;
        }
        pos = 0;
        while(sum) {
            if (sum & 1) {
                cout << (ll) pow(2, pos) << " ";
            }
            pos++;
            sum /= 2;
        }
        cout << endl;
    }

    return 0;
}
