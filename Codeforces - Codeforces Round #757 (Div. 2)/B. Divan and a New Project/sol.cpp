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

// heapify
void heapify(vector<ll> &arr, ll n, ll i) {
    ll largest = i;
    ll l = 2 * i + 1;
    ll r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest]) largest = l;
    if (r < n && arr[r] > arr[largest]) largest = r;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heap_sort(vector<ll> &arr) {
    ll n = arr.size();
    for (ll i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    for (ll i = n - 1; i >= 0; i--) {
        ll temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}

int main() {
    fast_input;
    tc() {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (auto &i : arr) cin >> i;
        heap_sort(arr);
    }
    return 0;
}
