class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int max = candies[0];
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] > max){
                max = candies[i];
            }
        }

        int left = 1, right = max, result = 0;           

        while (left <= right) {
            int mid = left + (right - left) / 2;   
            long long count = 0;
            for (int candy : candies)
                count += candy / mid;

            if (count >= k) {          
                result = mid;
                left = mid + 1;
            } else {                   
                right = mid - 1;
            }
        }

        return result;
    }
};
