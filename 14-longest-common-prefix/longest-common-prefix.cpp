class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string output = "";
        sort(strs.begin(), strs.end());

        string first = strs[0], last = strs[strs.size() - 1];
        for(int i = 0; i < last.size(); i++) {
            if(first[i] == last[i])
                output += first[i];
            else
                break;
        }
        return output;
    }
};