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
        for (auto &i : arr) cin >> i;
        ll found2 = 0;
        for (auto &i : arr) {
            while (i % 2 == 0) {
                i /= 2;
                found2++;
            }
        }
        // reverse sort arr
        sort(arr.begin(), arr.end(), greater<ll>());
        // find sum of array except first element 
        ll sum = 0;
        for (auto &i : arr) sum += i;
        sum -= arr[0];
        while (found2--) arr[0] *= 2;
        cout << sum + arr[0] << endl;
    }
    return 0;
}
