#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
 
int main() {
    fast_input;
    tc() {
        ll hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc >> hm >> dm;
        cin >> k >> w >> a;
        bool possible = false;
        for (int i = 0; i <= k; i++) {
            ll nhc = hc + a * i;
            ll ndc = dc + w * (k - i);
            ll bm = ceil(double(hm) / double(ndc));
            ll bc = ceil(double(nhc) / double(dm));
            if (bm <= bc) {
                possible = true;
                break;
            }
        }
        possible ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
