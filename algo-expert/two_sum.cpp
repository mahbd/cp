#include <bits/stdc++.h>

using namespace std;

bool twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    for (auto i : nums) {
        if (m.find(target - i) != m.end()) {
            return true;
        }
        m[i] = i;
    }
    return false;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;
    cout << twoSum(nums, target) << endl;
    return 0;
}