// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/swap-lex-order.html .

std::string swapLexOrder(std::string str, std::vector<std::vector<int>> pairs) {
    using namespace std;
    int n = str.size();
    vector<set<int>> mapping(n);
    for (int i = 0; i < n; i++) {
        mapping[i] = set<int>();
    }
    set<int> to_swap;
    for (auto pair: pairs) {
        mapping[pair[0] - 1].insert(pair[1] - 1);
        mapping[pair[1] - 1].insert(pair[0] - 1);
        to_swap.insert(pair[0] - 1);
        to_swap.insert(pair[1] - 1);
    }
    while (to_swap.size() > 0) {
        int idx = *to_swap.begin();
        set<int> group{idx};
        while (true) {
            set<int> new_group(group.begin(), group.end());
            for (auto idx: group) {
                for (auto mapped: mapping[idx]) {
                    new_group.insert(mapped);
                }
            }
            if (new_group.size() == group.size()) {
                break;
            }
            group = new_group;
        }
        string item;
        for (auto idx: group) {
            item += str[idx];
        }
        sort(item.begin(), item.end());
        reverse(item.begin(), item.end());
        int count = 0;
        for (auto idx: group) {
            str[idx] = item[count++];
            to_swap.erase(idx);
        }
    }
    return str;
}

