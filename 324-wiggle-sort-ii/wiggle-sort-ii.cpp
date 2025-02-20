#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> count;
        int maxNum = nums[0], minNum = nums[0];

        for (int num : nums) {
            count[num]++;
            maxNum = max(maxNum, num);
            minNum = min(minNum, num);
        }

        vector<int> result(n);
        int oddIdx = 1, evenIdx = 0;

        for (int i = maxNum; i >= minNum; i--) {
            while (count[i] > 0 && oddIdx < n) { 
                result[oddIdx] = i;
                oddIdx += 2;
                count[i]--;
            }
            while (count[i] > 0) { 
                result[evenIdx] = i;
                evenIdx += 2;
                count[i]--;
            }
        }

        nums = result;
    }
};
