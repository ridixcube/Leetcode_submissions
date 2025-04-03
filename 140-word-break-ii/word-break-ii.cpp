class Solution {
    void backtrack(string& s, unordered_set<string>& words, string sentence, vector<string>& ans, int start) {
        if (start == s.size()) {
            ans.push_back(sentence.substr(1));  // Remove leading space
            return;
        }

        for (int end = start + 1; end <= s.size(); end++) {
            string word = s.substr(start, end - start);
            if (words.count(word))
                backtrack(s, words, sentence + " " + word, ans, end);
        }
    }

public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string> ans;
        unordered_set<string> words(wordDict.begin(), wordDict.end());
        backtrack(s, words, "", ans, 0);
        return ans;
    }
};