// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/domain-type.html .

std::vector<std::string> domainType(std::vector<std::string> domains) {
    using namespace std;
    map<string, string> cache{{"org", "organization"},
                              {"com", "commercial"},
                              {"net", "network"},
                              {"info", "information"}};
    regex reg("\\.([^\\.]+)$");
    smatch matches;
    vector<string> res;
    for (auto domain : domains) {
        regex_search(domain, matches, reg);
        res.push_back(cache[matches[1].str()]);
    }
    return res;
}
