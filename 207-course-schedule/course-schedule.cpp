class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        vector<int> indeg(numCourses, 0);
        queue<int> q;
        for (auto preq : prerequisites) {
            graph[preq[1]].push_back(preq[0]);
            indeg[preq[0]]++;
        }
        for (int i = 0; i < numCourses; i++) {
            if (indeg[i] == 0)
                q.push(i);
        }
        int count = 0;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            count++;
            for (auto neighbour : graph[node]) {
                indeg[neighbour]--;
                if (indeg[neighbour] == 0) {
                    q.push(neighbour);
                }
            }
        }
        return count == numCourses;
    }
};