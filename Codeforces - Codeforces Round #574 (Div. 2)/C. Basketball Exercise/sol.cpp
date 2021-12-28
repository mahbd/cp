#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
 
int main() {
    fast_input;
    ll n;
    cin >> n;
    vector<ll> s1(n), s2(n);
    for(auto &i : s1) cin >> i;
    for(auto &i : s2) cin >> i;
    pair<ll, ll> d = {0, 0};

	for (int i = 0; i < n; ++i) {
		pair<ll, ll> next = {max(d.first, d.second + s1[i]), max(d.second, d.first + s2[i])};
		d = next;
	}
    cout << max(d.first, d.second) << endl;
    return 0;
}
