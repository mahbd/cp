#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define fast_input                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)
#define tc()          \
    ll test_case;     \
    cin >> test_case; \
    for (ll tcv = 0; tcv < test_case; tcv++)

int main() {
    // fast_input;
    tc() {
        printf("Case #%d: ", tcv + 1);
        string s;
        bool go = false;
        cin >> s;
        if (s.size() == 1) {
            cout << s << endl;
            continue;
        }
        list<char> l;
        l.push_back(s[s.size() - 1]);
        for (int i = s.size() - 2; i >= 0; i--) {
            if (s[i + 1] > s[i]) {
                go = true;
                l.push_front(s[i]);
                l.push_front(s[i]);
            } else if (s[i + 1] == s[i] && go) {
                l.push_front(s[i]);
                l.push_front(s[i]);
            } else {
                l.push_front(s[i]);
                go = false;
            }
        }
        for (auto i : l) {
            cout << i;
        } cout << endl;
    }
    return 0;
}
