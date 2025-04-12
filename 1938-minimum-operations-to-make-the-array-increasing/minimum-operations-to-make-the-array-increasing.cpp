class Solution {
public:
    int minOperations(vector<int>& nums) {
        int steps = 0;

        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] > nums[i + 1]) {
                steps += ((nums[i] - nums[i + 1]) + 1);
                nums[i + 1] += ((nums[i] - nums[i + 1]) + 1);
            } else if (nums[i] == nums[i + 1]) {
                steps += 1;
                nums[i + 1] += 1;
            }
        }

        return steps;
    }
};