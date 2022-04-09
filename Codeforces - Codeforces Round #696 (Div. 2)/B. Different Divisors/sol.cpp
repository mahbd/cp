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

ll next_prime(ll n)
{
    ll i = n;
    while (1)
    {
        bool flag = 0;
        for (ll j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            return i;
        i++;
    }
}

int main() {
    fast_input;
    tc() {
        ll n;
        cin >> n;
        ll second = next_prime(n + 1);
        ll third = next_prime(second + n);
        cout << min(second * second * second, second * third) << endl;
    }
    return 0;
}
