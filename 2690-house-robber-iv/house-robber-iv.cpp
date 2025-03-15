class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int max = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
        }
        int left = 0;
        int right = max;
        int result = max;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int count = 0;
            int i = 0;
            while (i < nums.size()) {
                if (nums[i] <= mid) {
                    count++;
                    i += 2;
                } else {
                    i++;
                }
            }
            if (count >= k) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return result;
    }
};
