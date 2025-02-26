class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum = 0, minsum = 0, maxsum = 0;
        for(int i : nums){
            sum += i;
            if(sum > maxsum) maxsum = sum;
            if(sum < minsum) minsum = sum;
        }
        return abs(maxsum - minsum);   
    }
};