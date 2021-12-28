#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define fast_input ios_base::sync_with_stdio(false); cin.tie(0)
#define tc() ll test_case; cin >> test_case; for(ll tcv = 0; tcv < test_case; tcv++)
// initialize int limak_weight, bob_weight, years_needed = 0;
// take input limak_weight and bob_weight
// run while loop until limak_weight is less that or equal to bob_weight
// output years_needed

int main() {
    int limak_weight, bob_weight, years_needed = 0;
    cin >> limak_weight >> bob_weight;
    while(limak_weight <= bob_weight) {
        limak_weight *= 3;
        bob_weight *= 2;
        years_needed++;
    }
    cout << years_needed << endl;
    return 0;
}
