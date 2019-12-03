// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/naming-roads.html .

bool namingRoads(std::vector<std::vector<int>> roads) {
    using namespace std;
    map<int, set<int>> cache;
    for (auto road: roads) {
        int a = road[0], b = road[1], n = road[2];
        if (cache.find(n - 1) != cache.end()) {
            if (cache[n - 1].find(a) != cache[n - 1].end()) {
                return false;
            }
            if (cache[n - 1].find(b) != cache[n - 1].end()) {
                return false;
            }
        }
        if (cache.find(n + 1) != cache.end()) {
            if (cache[n + 1].find(a) != cache[n + 1].end()) {
                return false;
            }
            if (cache[n + 1].find(b) != cache[n + 1].end()) {
                return false;
            }
        }
        cache[n] = set<int>{a, b};
    }
    return true;
}

