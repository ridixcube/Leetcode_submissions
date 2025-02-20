#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        for (int n : nums) {
            freqMap[n]++;
        }
        
        vector<pair<int, int>> freqVec(freqMap.begin(), freqMap.end());
        sort(freqVec.begin(), freqVec.end(), [](const auto& a, const auto& b) {
            return a.second > b.second; 
        });
        
        vector<int> res;
        for (int i = 0; i < k; ++i) {
            res.push_back(freqVec[i].first);
        }
        
        return res;
    }
};
