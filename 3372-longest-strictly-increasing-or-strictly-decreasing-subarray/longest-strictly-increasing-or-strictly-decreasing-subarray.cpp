#include <vector>
#include <algorithm> 

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if (nums.empty()) return 0;         
        int result = 1; 
        int asc = 1;    
        int desc = 1;   

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                asc++;
                desc = 1; 
            } else if (nums[i] < nums[i - 1]) {
                desc++;
                asc = 1; 
            } else {
                asc = 1;
                desc = 1;
            }
            result = max(result, max(asc, desc));
        }
        return result;        
    }
};
