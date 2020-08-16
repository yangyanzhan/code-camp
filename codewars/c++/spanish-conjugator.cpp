// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/spanish-conjugator.html .

using namespace std;

using V = std::vector<std::string>;
using R = std::unordered_map<std::string, V>;

R conjugate(const std::string &verb) {
    const static R suffix = {{"ar", {"o", "as", "a", "amos", "áis", "an"}},
                             {"er", {"o", "es", "e", "emos", "éis", "en"}},
                             {"ir", {"o", "es", "e", "imos", "ís", "en"}}};

    int S = verb.size() >= 2 ? verb.size() - 2 : 0;
    std::string base = verb.substr(0, S), infinitiveSuffix = verb.substr(S);

    auto it = suffix.find(infinitiveSuffix);

    R r;
    if (it != suffix.end()) {
        for (const auto &i : it->second) {
            r[verb].push_back(base + i);
        }
    }

    return r;
}
