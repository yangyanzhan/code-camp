// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/grouping-dishes.html .

std::vector<std::vector<std::string>> groupingDishes(std::vector<std::vector<std::string>> dishes) {
    using namespace std;
    map<string, set<string>> cache;
    for (auto dish: dishes) {
        string name = dish[0];
        for (int i = 1; i < dish.size(); i++) {
            string part = dish[i];
            if (cache.find(part) == cache.end()) {
                cache[part] = set<string>();
            }
            cache[part].insert(name);
        }
    }
    vector<vector<string>> res;
    for (auto pair: cache) {
        auto part = pair.first;
        auto names = pair.second;
        if (names.size() >= 2) {
            vector<string> row;
            row.push_back(part);
            row.insert(row.end(), names.begin(), names.end());
            res.push_back(row);
        }
    }
    return res;
}

