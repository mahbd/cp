#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
 
int main() {
    fast_input;
    tc() {
        string s;
        cin >> s;
        ll zero = count(s.begin(), s.end(), '0');
        ll one = count(s.begin(), s.end(), '1');
        if (one == zero) {
            cout << min(one, zero) - 1 << endl;
        } else {
            cout << min(one, zero) << endl;
        }
    }
    return 0;
}
