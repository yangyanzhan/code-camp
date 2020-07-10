// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/alphanumeric-less.html .

#include <regex>

std::vector<std::string> split(std::string s) {
    using namespace std;
    vector<string> res;
    regex reg("(\\d+)|([^\\d]+)");
    for (auto it = sregex_iterator(s.begin(), s.end(), reg);
         it != sregex_iterator(); it++) {
        string item = it->str();
        res.push_back(item);
    }
    return res;
}

bool is_number(std::string s) {
    using namespace std;
    for (auto ch : s) {
        if (ch < '0' || ch > '9') {
            return false;
        }
    }
    return true;
}

bool alphanumericLess(std::string s1, std::string s2) {
    using namespace std;
    vector<string> list1 = split(s1);
    vector<string> list2 = split(s2);
    int n = min(list1.size(), list2.size());
    for (int i = 0; i < n; i++) {
        string item1 = list1[i];
        string item2 = list2[i];
        if (is_number(item1) && is_number(item2)) {
            string tmp1;
            regex_replace(back_inserter(tmp1), item1.begin(), item1.end(),
                          regex("^0+"), "");
            if (tmp1.size() == 0) {
                tmp1 = "0";
            }
            string tmp2;
            regex_replace(back_inserter(tmp2), item2.begin(), item2.end(),
                          regex("^0+"), "");
            if (tmp2.size() == 0) {
                tmp2 = "0";
            }
            if (tmp1.size() != tmp2.size()) {
                return tmp1.size() < tmp2.size();
            } else {
                if (tmp1 != tmp2) {
                    return tmp1 < tmp2;
                }
            }
        } else if (is_number(item1) || is_number(item2)) {
            return is_number(item1);
        } else {
            if (item1 != item2) {
                return item1 < item2;
            }
        }
    }
    if (list1.size() == list2.size()) {
        for (int i = 0; i < n; i++) {
            string item1 = list1[i];
            string item2 = list2[i];
            if (item1.size() != item2.size()) {
                return item1.size() > item2.size();
            }
        }
    }
    return list1.size() < list2.size();
}
