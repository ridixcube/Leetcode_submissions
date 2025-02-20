class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low1 = 0, high1 = nums.size() - 1, pivot;

        while (low1 < high1) {
            int mid = (low1 + high1) / 2;
            if (nums[mid] > nums[high1]) low1 = mid + 1;
            else high1 = mid;
        }
        pivot = low1;

        int low2 = 0, high2 = nums.size() - 1;
    
        while (low2 <= high2) {
            int mid = (low2 + high2) / 2;
            int mid2 = (mid + pivot) % nums.size();

            if(nums[mid2] == target) return mid2;
            else if (nums[mid2] < target) low2 = mid + 1;
            else high2 = mid - 1;
        }
        return -1;
    }
};