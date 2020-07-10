// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/roads-building.html .

std::vector<std::vector<int>>
roadsBuilding(int cities, std::vector<std::vector<int>> roads) {
    using namespace std;
    set<vector<int>> cache;
    for (auto &road : roads) {
        if (road[0] > road[1]) {
            swap(road[0], road[1]);
        }
        cache.insert(road);
    }
    vector<vector<int>> res;
    for (int i = 0; i < cities; i++) {
        for (int j = i + 1; j < cities; j++) {
            vector<int> road{i, j};
            if (cache.find(road) == cache.end()) {
                res.push_back(road);
            }
        }
    }
    return res;
}
