// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/binary-generator.html .

std::vector<std::string> binaryGenerator(std::string s) {
    using namespace std;
    vector<string> res;
    for (auto ch: s) {
        if (ch == '1') {
            if (res.size() > 0) {
                for (auto &item: res) {
                    item += ch;
                }
            } else {
                res = {"1"};
            }
        } else {
            if (res.size() > 0) {
                for (auto &item: res) {
                    item += '0';
                }
                int n = res.size();
                for (int i = 0; i < n; i++) {
                    string item = res[i];
                    item[item.size() - 1] = '1';
                    res.push_back(item);
                }
            } else {
                res = {"0", "1"};
            }
        }
    }
    sort(res.begin(), res.end());
    return res;
}

