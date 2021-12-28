#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
 
int main() {
    fast_input;
    ll n, k;
    string s;
    cin >> n >> k >> s;
    vector<char> arr(k);
    for(auto &i : arr) cin >> i;
    ll ans = 0, size = 0;
    for (ll i = 0; i < n; i++) {
        if (find(arr.begin(), arr.end(), s[i]) != arr.end()) {
            size++;
        } else {
            ans += (size * (size + 1)) / 2;
            size = 0;
        }
    }
    ans += (size * (size + 1)) / 2;
    cout << ans << endl;
    return 0;
}
