class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        int n = ranks.size();
        int maxRank = ranks[0];
        for (int rank : ranks) {
            if (rank > maxRank)
                maxRank = rank;
        }
        long long left = 0, right = (long long)maxRank * cars * cars;

        while (left < right) {
            long long mid = left + (right - left) / 2;
            long long count = 0;
            for (int i = 0; i < n; i++) {
                count += sqrt(mid / ranks[i]);
                if (count >= cars)
                    break;
            }
            if (count >= cars) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};
