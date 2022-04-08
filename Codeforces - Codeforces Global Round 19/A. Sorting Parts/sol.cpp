#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
 
int main() {
    fast_input;
    tc() {
        ll n;
        cin >> n;
        vector<ll> arr(n), max_arr(n, -1), min_arr(n, -1);
        for (auto &i: arr) cin >> i;
        // check if sorted
        bool sorted = true;
        for (ll i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                sorted = false;
                break;
            }
        }
        sorted ? cout << "NO\n" : cout << "YES\n";
    }
    return 0;
}
