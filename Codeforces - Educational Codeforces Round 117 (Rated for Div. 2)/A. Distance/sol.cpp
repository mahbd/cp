#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
 
int main() {
    fast_input;
    tc() {
        ll x, y;
        cin >> x >> y;
        if ((x + y) % 2 == 1) {
            cout << "-1 -1" << endl;
        } else {
            cout << floor(x / 2.0) << " " << ceil(y / 2.0) << endl;
        }
    }
    return 0;
}
