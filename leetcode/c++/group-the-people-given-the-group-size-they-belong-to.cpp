// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/group-the-people-given-the-group-size-they-belong-to.html .

class Solution {
  public:
    vector<vector<int>> groupThePeople(vector<int> &groupSizes) {
        map<int, vector<vector<int>>> groups;
        for (int i = 0; i < groupSizes.size(); i++) {
            int size = groupSizes[i];
            if (groups.find(size) == groups.end()) {
                groups[size] = vector<vector<int>>();
            }
            bool found = false;
            for (auto &group : groups[size]) {
                if (group.size() < size) {
                    group.push_back(i);
                    found = true;
                    break;
                }
            }
            if (!found) {
                groups[size].push_back({i});
            }
        }
        vector<vector<int>> res;
        for (auto pair : groups) {
            for (auto group : pair.second) {
                res.push_back(group);
            }
        }
        return res;
    }
};
