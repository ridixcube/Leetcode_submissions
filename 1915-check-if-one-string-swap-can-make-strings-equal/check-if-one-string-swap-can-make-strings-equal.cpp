class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        int s1_letter[26] = {0};
        int s2_letter[26] = {0};
        int diff = 0;
        for(int i = 0; i < s1.size(); i++){
            char s1char = s1[i];
            char s2char = s2[i];
            if(s1char != s2char){
                diff++;
                if(diff>2)return false;
            }
            s1_letter[s1char - 'a']++;
            s2_letter[s2char - 'a']++;
        }
        for(int i = 0; i<26; i++){
            if(s1_letter[i] != s2_letter[i]) return false;
        }
        return true;        
    }
};