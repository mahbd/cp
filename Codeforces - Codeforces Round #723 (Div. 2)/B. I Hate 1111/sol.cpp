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
        if (n / 111 >= n % 11) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
