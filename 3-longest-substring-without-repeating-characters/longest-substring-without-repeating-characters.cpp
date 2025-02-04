class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, max = 0, n = s.length();
        while (j < n) {
            for (int k = i; k < j; k++) {
                if (s[k] == s[j]) {
                    i = k + 1; 
                    break;
                }
            }
            int curr = j - i + 1;
            if (curr > max) {
                max = curr;
            }
            j++; 
        }
        return max;
    }
};