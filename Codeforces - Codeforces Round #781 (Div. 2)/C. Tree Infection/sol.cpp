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
        ll n;
        cin >> n;
        map<ll, ll> hash;
        for (int i = 1; i < n; i++) {
            ll number;
            cin >> number;
            hash[number] += 1;
        }
        vector<pair<ll, ll>> arr(n);
        for (int i = 1; i <= n; i++) {
            arr[i - 1] = {i, hash[i]};
        }

        sort(arr.rbegin(), arr.rend());
        ll infected = 1, seconds = 1, inStart = 0, inEnd = 0;
        arr[0].first--;
        map<ll, ll> infection_count;
        while(n > infected) {
            for (int i = 0; i <= inEnd; i++) {
                if (arr[i].first > 0) {
                    infected++;
                    arr[i].first--;
                }
            }
            inEnd++;
            seconds++;
        }
        cout << seconds << endl;
    }
    return 0;
}
