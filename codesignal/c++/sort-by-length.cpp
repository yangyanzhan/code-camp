// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/sort-by-length.html .

std::vector<std::string> sortByLength(std::vector<std::string> inputArray) {
    using namespace std;
    vector<tuple<string, int>> cache;
    for (int i = 0; i < inputArray.size(); i++) {
        cache.push_back(make_tuple(inputArray[i], i));
    }
    sort(cache.begin(), cache.end(), [] (auto item1, auto item2) {
        string s1 = get<0>(item1);
        string s2 = get<0>(item2);
        if (s1.size() != s2.size()) {
            return s1.size() < s2.size();
        }
        return get<1>(item1) < get<1>(item2);
    });
    vector<string> res;
    for (auto pair: cache) {
        res.push_back(get<0>(pair));
    }
    return res;
}

