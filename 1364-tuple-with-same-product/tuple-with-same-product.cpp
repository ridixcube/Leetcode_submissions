class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> product_map;
        
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int product = nums[i] * nums[j];
                product_map[product]++;
            }
        }
        
        for (auto& pair : product_map) {
            int value = pair.second;
            ans += 4 * value * (value - 1);
        }
        
        return ans;
    }
};