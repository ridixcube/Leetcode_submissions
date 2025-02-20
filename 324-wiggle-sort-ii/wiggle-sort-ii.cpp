#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> count;
        int maxNum = INT_MIN, minNum = INT_MAX;

        for (int num : nums) {
            count[num]++;
            maxNum = max(maxNum, num);
            minNum = min(minNum, num);
        }

        vector<int> result(n);
        int odd = 1, even = 0;

        for (int i = maxNum; i >= minNum; i--) {
            while (count[i] > 0 && odd < n) { 
                result[odd] = i;
                odd += 2;
                count[i]--;
            }
            while (count[i] > 0) { 
                result[even] = i;
                even += 2;
                count[i]--;
            }
        }

        nums.swap(result);
    }
};
