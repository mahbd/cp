#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)

ll binary_string_to_int(string s)
{
    ll ans = 0;
    for(ll i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
            ans += pow(2, s.size() - i - 1);
    }
    return ans;
}

int main() {
    fast_input;
    string s;
    cin >> s;
    replace(s.begin(), s.end(), '7', '1');
    replace(s.begin(), s.end(), '4', '0');
    // prepend 1 in s
    s = "1" + s;
    cout << binary_string_to_int(s) - 1 << endl;
    return 0;
}
