#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
const ll mod = 1e9 + 7;

int main() {
    fast_input;
    tc() {
        ll n, k;
        cin >> n >> k;
        ll bit = min(n, k);
        cout << (ll)((n - 1) * (pow(2, bit) - 1) + 1) % mod << endl;
    }
    return 0;
}
