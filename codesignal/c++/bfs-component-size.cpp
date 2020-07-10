// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/bfs-component-size.html .

int bfsComponentSize(std::vector<std::vector<bool>> matrix) {
    using namespace std;
    vector<int> nodes{1};
    set<int> visited;
    while (!nodes.empty()) {
        vector<int> next_level;
        for (auto node : nodes) {
            visited.insert(node);
            for (int j = 0; j < matrix.size(); j++) {
                if (matrix[node][j]) {
                    if (visited.find(j) == visited.end()) {
                        next_level.push_back(j);
                    }
                }
            }
        }
        nodes = next_level;
    }
    return visited.size();
}
