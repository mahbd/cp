#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
const int mod = 1e9 + 7;

ll factorial(ll n) {
    if (n == 0 || n == 1) return 1;
    return (n * factorial(n - 1)) % mod;
}

int main() {
    fast_input;
    tc() {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for(auto &i: arr) cin >> i;
        // sort array
        sort(arr.begin(), arr.end());
        ll taken = 0, buffer = 0, ans = 1;
        bool pos = true;
        for(auto &i: arr) {
            if(i <= taken) {
                buffer++;
            } else {
                while(buffer > 0 && taken < i) {
                    taken++;
                    ans *= buffer;
                    buffer--;
                }
                if (taken < i) {
                    break;
                } else {
                    buffer++;
                }
            }
        }
        buffer == 0 ? cout << 0 << endl: cout << (factorial(buffer) * ans) % mod << endl;
    }
    return 0;
}
