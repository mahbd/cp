#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int minimumSum(vector<int>& nums) {
        int sum = -1;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size() - 1; j++) {
                if (nums[j] <= nums[i]) continue;
                for (int k = j + 1; k < nums.size(); k++) {
                    if (nums[k] >= nums[j]) continue;
                    int temp = nums[i] + nums[j] + nums[k];
                    if (sum == -1 || temp < sum) sum = temp;
                }
            }
        }
        return sum;
    }
};