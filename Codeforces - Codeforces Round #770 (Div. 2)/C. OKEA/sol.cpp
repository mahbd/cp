#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
 
int main() {
    fast_input;
    tc() {
        ll n, k;
        cin >> n >> k;
        if (k == 1) {
            cout << "YES" << endl;
            for (ll i = 0; i < n; i++) {
                cout << i + 1 << endl;
            }
            continue;
        }
        
        if ((n * k) % 2 == 0 && n % 2 == 0) {
            cout << "YES" << endl;
            ll i = 0;
            while (i < n) {
                for (ll j = 0; j < k; j++) {
                    if (i % 2 == 0) {
                        cout << i * k + j * 2 + 1 << " ";
                    } else {
                        cout << (i - 1) * k + j * 2 + 2 << endl;
                    }
                }
                i++;
                cout << endl;
            }
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}
