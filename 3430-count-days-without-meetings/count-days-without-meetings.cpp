class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        int prev = 0;
        for (auto&  meeting : meetings) {
            int start = max(meeting[0], prev + 1);
            int length = meeting[1] - start + 1;
            days -= max(length, 0);
            prev = max(prev, meeting[1]);
        }
        return days;
    }
};