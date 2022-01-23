#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast_input ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define tc() int t;cin>>t;while(t--)

int main(){
    tc() {
        ll n, num;
        cin >> n;
        vector<list<ll>> records(n + 1);
        vector<ll> ans;
        for(int i = 0; i < n; i++) {
            cin >> num;
            records[num].push_back(i);
        }
        ll max_pos = 0;
        while (max_pos < n) {
            ll cur_pos = max_pos;
            for (ll i = 0; i < n; i++) {
                while (!records[i].empty() && records[i].front() < max_pos) {
                    records[i].pop_front();
                }
                if (records[i].empty()) {
                    ans.push_back(i);
                    break;
                }
                if (i == n - 1) {
                    ans.push_back(n);
                }
                cur_pos = max(cur_pos, records[i].front());
            }
            max_pos = cur_pos + 1;
        }
        cout << ans.size() << endl;
        for (auto i: ans) cout << i << " "; cout << endl;
    }
    return 0;
}