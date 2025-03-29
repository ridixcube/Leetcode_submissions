class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = 0; i < s.length(); i += 2 * k){
            int end = min(i + k - 1, (int)s.length() - 1);
            reverse(s.begin() + i, s.begin() + end + 1);
        }
    return s;
    }
};