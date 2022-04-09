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

struct res_s {
    ll start, end, sum;
};

struct add_s {
    ll start, end;
    bool to_recompute;
};

res_s calculate_res(vector<ll> &arr, ll n) {
    vector<ll> dp(n);
    dp[0] = arr[0];
    for (ll i = 1; i < n; i++) {
        dp[i] = max(dp[i - 1] + arr[i], arr[i]);
    }
    ll sum = INT64_MIN, end, start = 0;
    for (int i = 0; i < n; i++) {
        if (sum < dp[i]) {
            sum = dp[i];
            end = i;
        }
    }
    for (int i = end; i >= 0; i--) {
        if (dp[i] < 0) {
            start = i;
            break;
        }
    }
    return {start, end, sum};
};

add_s addX(vector<ll> &arr, ll x, ll start, ll end, ll cmStart, ll cmEnd) {
    ll n = arr.size();
    if (start >= cmStart && end <= cmEnd) {
        if (cmEnd < n - 1 && cmStart > 0) {
            if (arr[cmEnd + 1] > arr[cmStart - 1]) {
                arr[cmEnd + 1] += x;
                cmEnd++;
            } else {
                arr[cmStart - 1] += x;
                cmStart--;
            }
        } else if (cmEnd < n - 1) {
            arr[cmEnd + 1] += x;
            cmEnd++;
        } else if (cmStart > 0) {
            arr[cmStart - 1] += x;
            cmStart--;
        }
        return {cmStart, cmEnd, true};
    } else {
        if (start < cmStart) {
            arr[cmStart - 1] += x;
            cmStart--;
        } else {
            arr[cmEnd + 1] += x;
            cmEnd++;
        }
        return {cmStart, cmEnd, false};
    }
}

int main() {
    fast_input;
    tc() {
        ll n, x;
        cin >> n >> x;
        vector<ll> arr(n);
        for (auto &i : arr) cin >> i;
        res_s res = calculate_res(arr, n);
        cout << res.sum << " ";
        add_s add = {res.start, res.start, true};
        arr[res.start] += x;
        for (int i = 0; i < n; i++) {
            res = calculate_res(arr, n);
            cout << res.sum << " ";
            if (i == n - 1) break;
            add = addX(arr, x, res.start, res.end, add.start, add.end);
        }
        cout << endl;
    }
    return 0;
}
