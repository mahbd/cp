#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int minimumSum(vector<int>& nums) {
        int BIG = INT32_MAX / 2;
        int n = nums.size();
        vector<int> smallest(n, BIG), smallest_reg(n, BIG);
        smallest[n - 1] = nums[n - 1];
        smallest_reg[0] = nums[0];
        for (int i = n - 2; i >= 0; i--) {
            smallest[i] = min(smallest[i + 1], nums[i]);
            smallest_reg[n - i - 1] = min(smallest_reg[n - i - 2], nums[n - i - 1]);
        }
        int sum = BIG;
        for (int i = 1; i < n - 1; i++) {
            if (nums[i] <= smallest[i + 1]) continue;
            if (nums[i] <= smallest_reg[i - 1]) continue;
            sum = min(sum, nums[i] + smallest[i + 1] + smallest_reg[i - 1]);
        }
        return sum == BIG ? -1 : sum;
    }
};

//[8,6,1,5,3]
//[5,4,8,7,10,2]
//[6,5,4,3,4,5]
//[2,3,2,1]

int main() {
    Solution sol;
    vector<int> nums = {8, 6, 1, 5, 3};
    cout << sol.minimumSum(nums) << endl;
    nums = {5, 4, 8, 7, 10, 2};
    cout << sol.minimumSum(nums) << endl;
    nums = {6, 5, 4, 3, 4, 5};
    cout << sol.minimumSum(nums) << endl;
    nums = {2, 3, 2, 1};
    cout << sol.minimumSum(nums) << endl;
    return 0;
}