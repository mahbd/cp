#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
 
int main() {
    fast_input;
    tc() {
        ll a, b;
        cin >> a >> b;
        vector<ll> bitCount(32, 0);
        for (ll i = a; i <= b; i++) {
            for(ll j = 0; j < 32; j++) {
                bitCount[j] += (i >> j) & 1;
            }
        }
        cout << (b - a + 1) - *max_element(bitCount.begin(), bitCount.end()) << endl;
    }
    return 0;
}
