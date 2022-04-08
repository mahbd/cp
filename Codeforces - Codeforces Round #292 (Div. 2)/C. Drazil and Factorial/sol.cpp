#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
 
int main() {
    fast_input;
    ll n;
    string s;
    cin >> n >> s;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
