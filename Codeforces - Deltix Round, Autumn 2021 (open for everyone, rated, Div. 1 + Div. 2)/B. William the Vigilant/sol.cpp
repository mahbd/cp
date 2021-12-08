#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)

bool has_abc_base(const string &s, int pos) {
    for(int i = 0; i < 3; i++) {
        if(s[pos + i] != 'a' + i) return false;
    }
    return true;
}

bool has_abc(const string &s, int pos) {
    ll n = s.size();
    if (n < 3) return false;
    bool a = false, b = false, c = false;
    if (pos > 0 && n - pos >= 2) {
        a = has_abc_base(s, pos - 1);
    }
    if (pos > 1 && n - pos >= 1) {
        b = has_abc_base(s, pos - 2);
    }
    if (pos > 2 && n - pos >= 0) {
        c = has_abc_base(s, pos - 3);
    }
    return a || b || c;
}

int main() {
    fast_input;
    ll n, q;
    string s;
    cin >> n >> q >> s;
    if (n < 3) {
        while (q--) {
            cout << "0\n";
        }
        return 0;
    }
    ll cnt = 0;
    for(ll i = 0; i < s.size() - 2; i++) {
        if(s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c') {
            cnt++;
        }
    }
    while(q--) {
        ll pos;
        char ch;
        cin >> pos >> ch;
        if (ch == s[pos - 1]) {
            cout << cnt << "\n";
            continue;
        }
        if (has_abc(s, pos)) {
            s[pos - 1] = ch;
            cnt--;
            cout << cnt << "\n";
            continue;
        }
        s[pos - 1] = ch;
        if (has_abc(s, pos)) {
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
