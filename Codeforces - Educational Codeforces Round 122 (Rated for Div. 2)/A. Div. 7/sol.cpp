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
        if (n % 7 == 0) {
            cout << n << endl;
        } else {
            n -= n % 10;
            for (ll i = n + 1; i - n <= 9; i++) {
                if (i % 7 == 0) {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
