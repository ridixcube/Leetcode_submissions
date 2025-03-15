class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int maxVal = nums[0];
        for (int i = 1; i < nums.size(); i++)
            maxVal = nums[i] > maxVal ? nums[i] : maxVal;

        int left = 1, right = maxVal, result = maxVal;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int count = 0;

            for (int i = 0; i < nums.size();) 
                i = nums[i] <= mid ? (count++, i + 2) : i + 1;

            count >= k ? (result = mid, right = mid - 1) : left = mid + 1;
        }

        return result;
    }
};
