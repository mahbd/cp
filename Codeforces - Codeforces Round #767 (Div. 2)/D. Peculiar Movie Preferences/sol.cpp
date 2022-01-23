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
        vector<string> arr;
        map<string, bool> records, records3;
        bool positive = false;
        arr.reserve(n);
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            if (s.size() == 1) {
                positive = true;
            } else if (s.size() == 2) {
                arr.push_back(s);
                if (s[0] == s[1]) {
                    positive = true;
                }
                if (records.count(s) || records3.count(s)) {
                    positive = true;
                }
                string reversed = s;
                reverse(reversed.begin(), reversed.end());
                records[reversed] = true;
            } else {
                arr.push_back(s);
                if (s[0] == s[2]) {
                    positive = true;
                }
                if (records.count(s)) {
                    positive = true;
                }
                string reversed = s;
                reverse(reversed.begin(), reversed.end());
                records[reversed] = true;
                if (records.count(s.substr(1, 2))) {
                    positive = true;
                }
                records3[reversed.substr(1, 2)] = true;
            }
        }
        if (positive) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
