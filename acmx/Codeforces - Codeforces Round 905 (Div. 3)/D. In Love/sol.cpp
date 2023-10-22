#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
// #define endl '\n'

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    multiset<pair<int, int>> s1, s2;
    int n;
    cin >> n;
    while (n--) {
        char sign;
        int l, r;
        cin >> sign >> l >> r;
        if (sign == '+') {
            s1.insert({l, r});
            s2.insert({r, l});
        } else {
            s1.erase(s1.find({l, r}));
            s2.erase(s2.find({r, l}));
        }
        if (s1.empty()) {
            cout << "NO" << endl;
            continue;
        }
        int begin = s1.rbegin()->first;
        int end = s2.begin()->first;
        if (begin > end) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
