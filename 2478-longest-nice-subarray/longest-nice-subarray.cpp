class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int length = 0, count = 0, maximum = 0;
        for(int i = 0; i < nums.size(); i++){
            while((count & nums[i]) != 0){
                count ^= nums[length++];
            }
            count |= nums[i];
            maximum = max(maximum, i - length + 1);
        }
        return maximum;        
    }
};