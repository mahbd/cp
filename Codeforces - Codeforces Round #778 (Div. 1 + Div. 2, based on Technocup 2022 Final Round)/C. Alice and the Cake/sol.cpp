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
    // fast_input;
    tc() {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        list<ll> reserve;
        for (auto &i : arr) cin >> i;
        ll sum = accumulate(arr.begin(), arr.end(), 0LL);
        sort(arr.rbegin(), arr.rend());
        reserve.push_back(sum);
        bool possible = true;
        for (int i = 0; i < n; i++) {
            while (!reserve.empty() && reserve.back() > arr[i]) {
                ll number = reserve.back();
                reserve.pop_back();
                reserve.push_front(number - number / 2);
                reserve.push_front(number / 2);
            }

            // cout << reserve.size() << " " << reserve.back() << endl;
            // for (auto i: reserve) cout << i << " "; cout << endl;

            bool found = false;
            // iterate from back
            list<ll>::iterator it = reserve.end();
            it--;
            for (; ; it--) {
                if (*it == arr[i]) {
                    found = true;
                    reserve.erase(it);
                    break;
                }
                if (it == reserve.begin()) break;
            }
            if (!found) {
                possible = false;
                break;
            }
        }

        possible ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
