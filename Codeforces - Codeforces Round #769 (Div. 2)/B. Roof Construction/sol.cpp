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
        ll lowest = n;
        for (int i = 0; i < 32; i++) {
            ll num = n;
            num >>= i;
            num <<= i;
            if (num != 0) {
                lowest = min(lowest, num);
            }
        }
        for (ll i = 1; i <= n; i++) {
            if (i == lowest) {
                cout << 0 << " ";
            }
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
