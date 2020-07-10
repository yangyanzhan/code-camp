// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/pair-of-shoes.html .

bool pairOfShoes(std::vector<std::vector<int>> shoes) {
    using namespace std;
    map<int, int> cache;
    for (auto pair : shoes) {
        int type = pair[0], size = pair[1];
        if (cache.find(size) == cache.end()) {
            cache[size] = 0;
        }
        if (type == 0) {
            cache[size]--;
        } else {
            cache[size]++;
        }
    }
    for (auto pair : cache) {
        if (pair.second != 0) {
            return false;
        }
    }
    return true;
}
