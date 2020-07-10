// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/all-paths-from-source-to-target.html .

class Solution {
    set<int> visited = {0};
    vector<int> path = {0};

  public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph) {
        vector<vector<int>> res;
        int n = graph.size(), last = path[path.size() - 1];
        if (last == n - 1) {
            res.push_back(path);
            return res;
        }
        for (auto next : graph[last]) {
            if (visited.find(next) == visited.end()) {
                visited.insert(next);
                path.push_back(next);
                auto sub_res = allPathsSourceTarget(graph);
                res.insert(res.end(), sub_res.begin(), sub_res.end());
                visited.erase(next);
                path.pop_back();
            }
        }
        return res;
    }
};
