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

void print_first(ll c) {
    cout << "..+";
    for (ll i = 0; i < c - 1; i++) {
        cout << "-+";
    }
    cout << endl << "..|";
    for (ll i = 0; i < c - 1; i++) {
        cout << ".|";
    }
    cout << endl << "+";
    for (ll i = 0; i < c; i++) {
        cout << "-+";
    }
    cout << endl;
}

void print_rest(ll c) {
    cout << "|";
    for (ll i = 0; i < c; i++) {
        cout << ".|";
    }
    cout << endl << "+";
    for (ll i = 0; i < c; i++) {
        cout << "-+";
    }
    cout << endl;
}

int main() {
    // fast_input;
    tc() {
        ll r, c;
        cin >> r >> c;
        printf("Case #%lld:\n", tcv + 1);
        print_first(c);
        for (ll i = 0; i < r - 1; i++) {
            print_rest(c);
        }
    }
    return 0;
}
