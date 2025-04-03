class Solution {
public:
    int rob(vector<int>& nums) {
        int prev = 0, maximum = 0;
        for (int currVal : nums) {
            int temp = max(maximum, prev + currVal);
            prev = maximum;
            maximum = temp;
        }
        return maximum;
    }
};