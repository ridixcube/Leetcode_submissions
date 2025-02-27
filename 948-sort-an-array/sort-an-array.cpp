class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        int n1 = mid - low + 1;
        int n2 = high - mid;

        int left[n1], right[n2];

        for (int i = 0; i < n1; i++) 
            left[i] = nums[low + i];
        for (int j = 0; j < n2; j++) 
            right[j] = nums[mid + 1 + j];

        int i = 0, j = 0, k = low; 
        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) {
                nums[k++] = left[i++];
            } else {
                nums[k++] = right[j++];
            }
        }
        while (i < n1) {
            nums[k++] = left[i++];
        }
        while (j < n2) {
            nums[k++] = right[j++];
        }
    }

    void merges(vector<int>& nums, int left, int right) {
        if (left >= right) return;
        
        int mid = left + (right - left) / 2;
        merges(nums, left, mid);
        merges(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }

    vector<int> sortArray(vector<int>& nums) {
        merges(nums, 0, nums.size() - 1);
        return nums;
    }
};
