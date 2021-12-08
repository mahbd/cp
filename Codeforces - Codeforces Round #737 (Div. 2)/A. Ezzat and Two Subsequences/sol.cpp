#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
 
int main() {
    fast_input;
    tc() {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for(auto &i : arr) cin >> i;
        sort(arr.begin(), arr.end());
        ll sum = accumulate(arr.begin(), arr.end(), 0LL);
        double ans = -10E11;
        ll tem_sum = -10E11, tem_count = 0;
        for(auto &i : arr) {
            tem_sum += i;
            tem_count++;
            ans = max(ans, (double)tem_sum / tem_count + (double)(sum - tem_sum) / (n - tem_count));
        }
        cout << fixed << setprecision(9) << ans << endl;
    }
    return 0;
}
