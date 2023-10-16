#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    ll test_case;
    cin >> test_case;
    for (int tcv = 0; tcv < test_case; tcv++) {
        ll n;
        string s;
        cin >> n >> s;
        ll start = 0, end = s.size() - 1;
        while (start < end) {
            if (s[start] != s[end]) {
                start++;
                end--;
            } else
                break;
        }
        cout << end - start + 1 << endl;
    }

    return 0;
}
