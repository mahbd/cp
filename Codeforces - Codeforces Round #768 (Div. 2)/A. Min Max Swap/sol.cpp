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
        vector<ll> arr1(n), arr2(n);
        for (auto &i : arr1) cin >> i;
        for (auto &i : arr2) cin >> i;
        for (ll i = 0; i < n; i++) {
            if (arr1[i] > arr2[i]) swap(arr1[i], arr2[i]);
        }
        cout << *max_element(arr1.begin(), arr1.end()) * *max_element(arr2.begin(), arr2.end()) << endl;
    }
    
    return 0;
}
