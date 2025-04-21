class Solution {
public:

int rem(vector<int> map, int T){
    int sum = 0;
    for(int i: map ){
        if(i>T){
            sum += i - T;
        }
    }
    return sum;
}

    int leastInterval(vector<char>& task, int n) {
        if(task.size() == 1) return 1;

        vector<int> map(26,0);
        int t = 0;
        unordered_set<char> s;
        for(char ch: task){
            map[ch-'A']++;
            s.insert(ch);
        }

        int greatest = -1, ind = -1;
        for(int i= 0; i<26; i++){
            if(map[i]> greatest){
                greatest = map[i];
                ind = i;
            }
        }
        int T = greatest -1;
        map[ind] = 0;
        int U = s.size();

        if(n < U){
            int k = task.size();
            return max(k, (n*T) + T + 1 + rem(map, T));
        }
        else{
            return T + 1 + (n*T) + rem(map, T);
        }
        
    }
};