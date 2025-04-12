class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n = piles.size();
        priority_queue<int> q;

        int totalStones = 0;
        for(int i = 0 ; i < n ; i++){
            totalStones += piles[i];
            q.push(piles[i]);
        }

        while(k--){
            int value = q.top();
            q.pop();
            int remove = floor(value/2);
            totalStones -= remove;
            value -= remove;
            q.push(value);
        }

        return totalStones;
    }
};