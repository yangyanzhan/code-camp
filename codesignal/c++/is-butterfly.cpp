// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/is-butterfly.html .

bool isButterfly(std::vector<std::vector<bool>> adj) {
    using namespace std;
    if (adj.size() != 5) {
        return false;
    }
    int center_idx = -1;
    for (int i = 0; i < 5; i++) {
        int count = 0;
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                if (adj[i][j]) {
                    return false;
                }
            }
            if (adj[i][j]) {
                count++;
            }
        }
        if (count == 4) {
            if (center_idx >= 0) {
                return false;
            }
            center_idx = i;
        } else if (count != 2) {
            return false;
        }
    }
    if (center_idx < 0) {
        return false;
    }
    set<int> visited{center_idx};
    for (int i = 0; i < 5; i++) {
        if (visited.find(i) != visited.end()) {
            continue;
        }
        for (int j = 0; j < 5; j++) {
            if (j == center_idx) {
                continue;
            }
            if (adj[i][j]) {
                if (visited.find(j) != visited.end()) {
                    return false;
                }
                visited.insert(i);
                visited.insert(j);
            }
        }
    }
    return visited.size() == 5;
}

