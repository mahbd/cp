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

<<<<<<< HEAD
ll calculate_cost(const string &s, )
=======
ll count_ans(string s, ll x, ll y, ll start, ll end) {
    ll ans = 0;
    for (ll i = start + 1; i < end; i++) {
        if (s[i - 1] == 'C' && s[i] == 'J') {
            ans += x;
        } else if (s[i - 1] == 'J' && s[i] == 'C') {
            ans += y;
        }
    }
    return ans;
}

pair<ll, string> experiment1(string s, ll start, ll end, ll x, ll y) {
    for (ll i = start; i < end; i++) {
        s[i] = 'C';
    }
    start = max(0LL, start - 1);
    end = min((ll)s.size(), end + 1);
    ll ans = count_ans(s, x, y, start, end);
    return make_pair(ans, s);
}

pair<ll, string> experiment2(string s, ll start, ll end, ll x, ll y) {
    for (ll i = start; i < end; i++) {
        s[i] = 'J';
    }
    start = max(0LL, start - 1);
    end = min((ll)s.size(), end + 1);
    ll ans = count_ans(s, x, y, start, end);
    return make_pair(ans, s);
}

pair<ll, string> experiment3(string s, ll start, ll end, ll x, ll y) {
    bool first = true;
    for (ll i = start; i < end; i++) {
        if (first) {
            s[i] = 'J';
            first = false;
        } else {
            s[i] = 'C';
            first = true;
        }
    }
    if (!first && x > 0) {
        s[end - 1] = 'C';
    }
    start = max(0LL, start - 1);
    end = min((ll)s.size(), end + 1);
    ll ans = count_ans(s, x, y, start, end);
    return make_pair(ans, s);
}

pair<ll, string> experiment4(string s, ll start, ll end, ll x, ll y) {
    bool first = true;
    for (ll i = start; i < end; i++) {
        if (first) {
            s[i] = 'C';
            first = false;
        } else {
            s[i] = 'J';
            first = true;
        }
    }
    if (!first && y > 0) {
        s[end - 1] = 'J';
    }
    start = max(0LL, start - 1);
    end = min((ll)s.size(), end + 1);
    ll ans = count_ans(s, x, y, start, end);
    return make_pair(ans, s);
}
>>>>>>> 8408a5de44ce0c2a867d32e1eda029583981b92f

int main() {
    fast_input;
    tc() {
<<<<<<< HEAD
        ll a, b;
        string s;
        cin >> a >> b >> s;

=======
        ll x, y;
        string s;
        cin >> x >> y >> s;
        ll ans = 0, index = 0, end = 0;
        while (index < s.size()) {
            end = index;
            while (s[end] == '?') {
                end++;
            }
            if (end > index) {
                auto rex1 = experiment1(s, index, end, x, y);
                auto rex2 = experiment2(s, index, end, x, y);
                auto rex3 = experiment3(s, index, end, x, y);
                auto rex4 = experiment4(s, index, end, x, y);

                if (rex1.first <= rex2.first && rex1.first <= rex3.first &&
                    rex1.first <= rex4.first) {
                    s = rex1.second;
                } else if (rex2.first <= rex1.first && rex2.first <= rex3.first &&
                           rex2.first <= rex4.first) {
                    s = rex2.second;
                } else if (rex3.first <= rex1.first && rex3.first <= rex2.first &&
                           rex3.first <= rex4.first) {
                    s = rex3.second;
                } else {
                    s = rex4.second;
                }
                // cout << rex1.first << " " << rex2.first << " " << rex3.first
                //      << " " << rex4.first << endl;
                // cout << s << " " << index << " " << end << endl;
            }
            index = end;
            index++;
        }
        ans = count_ans(s, x, y, 0, s.size());
        printf("Case #%lld: %lld\n", tcv + 1, ans);
>>>>>>> 8408a5de44ce0c2a867d32e1eda029583981b92f
    }
    return 0;
}
