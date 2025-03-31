class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        if (k == 1) return 0;

        vector<int> pair_sums;
        for (int i = 0; i < weights.size() - 1; ++i) {
            pair_sums.push_back(weights[i] + weights[i + 1]);
        }

        sort(pair_sums.begin(), pair_sums.end());
        return accumulate(pair_sums.end() - (k - 1), pair_sums.end(), 0LL) -
               accumulate(pair_sums.begin(), pair_sums.begin() + (k - 1), 0LL);
    }
};
