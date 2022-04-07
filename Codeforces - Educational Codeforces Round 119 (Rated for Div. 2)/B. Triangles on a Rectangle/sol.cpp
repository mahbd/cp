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
        ll w, h;
        cin >> w >> h;
        ll k;
        cin >> k;
        vector<ll> arr1(k);
        for (auto &i : arr1) cin >> i;
        
        cin >> k;
        vector<ll> arr2(k);
        for (auto &i : arr2) cin >> i;
        cin >> k;
        vector<ll> arr3(k);
        for (auto &i : arr3) cin >> i;
        cin >> k;
        vector<ll> arr4(k);
        for (auto &i : arr4) cin >> i;
        ll dif1 = *max_element(arr1.begin(), arr1.end()) - *min_element(arr1.begin(), arr1.end());
        ll dif2 = *max_element(arr2.begin(), arr2.end()) - *min_element(arr2.begin(), arr2.end());
        ll dif3 = *max_element(arr3.begin(), arr3.end()) - *min_element(arr3.begin(), arr3.end());
        ll dif4 = *max_element(arr4.begin(), arr4.end()) - *min_element(arr4.begin(), arr4.end());

        // for (auto i: arr1) cout << i << " "; cout << endl;
        // for (auto i: arr2) cout << i << " "; cout << endl;
        // for (auto i: arr3) cout << i << " "; cout << endl;
        // for (auto i: arr4) cout << i << " "; cout << endl;

        // cout << dif1 << " " << dif2 << " " << dif3 << " " << dif4 << endl;

        cout << max(max(dif1, dif2) * h, max(dif3, dif4) * w) << endl;
    }
    return 0;
}
