#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)

bool is_palindrome(const string &s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}
 
int main() {
    fast_input;
    tc() {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (k == 0) {
            cout << 1 << endl;
            continue;
        }
        if (is_palindrome(s)) {
            cout << 1 << endl;
            continue;
        }
        cout << 2 << endl;
    }
    return 0;
}
