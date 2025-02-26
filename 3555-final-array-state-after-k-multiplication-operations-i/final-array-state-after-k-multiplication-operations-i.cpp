class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while (k > 0) {
            int min = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] < nums[min]) {
                    min = i;
                }
            }
            nums[min] *= multiplier;
            k--;
        }
        return nums;
    }
};