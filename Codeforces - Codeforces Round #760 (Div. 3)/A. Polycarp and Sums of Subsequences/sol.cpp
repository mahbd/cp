#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
 
int main() {
    fast_input;
    tc() {
        fast_input;
        vector<ll> arr(7);
        for (auto &i : arr) cin >> i;
        ll a = arr[6] - arr[5];
        ll b1 = arr[6] - arr[4];
        ll b2 = arr[6] - arr[3];
        ll c1 = arr[6] - a - b1;
        ll c2 = arr[6] - a - b2;
        if (find(arr.begin(), arr.end(), a) != arr.end() && find(arr.begin(), arr.end(), b1) != arr.end() && find(arr.begin(), arr.end(), c1) != arr.end()) {
            cout << a << " " << b1 << " " << c1 << endl;
        } else if (find(arr.begin(), arr.end(), a) != arr.end() && find(arr.begin(), arr.end(), b2) != arr.end() && find(arr.begin(), arr.end(), c2) != arr.end()) {
            cout << a << " " << b2 << " " << c2 << endl;
        }
    }
    return 0;
}
