// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/construct-square.html .

std::vector<int> format(std::string s) {
    map<char, int> mapping;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (mapping.find(ch) == mapping.end()) {
            mapping[ch] = 0;
        }
        mapping[ch]++;
    }
    vector<int> res;
    for (auto it: mapping) {
        res.push_back(it.second);
    }
    sort(res.begin(), res.end());
    return res;
}

int constructSquare(std::string s) {
    using namespace std;
    int top = ceil(sqrt(pow(10, s.length())));
    int bottom = floor(sqrt(pow(10, s.length() - 1) - 1));
    vector<int> vs = format(s);
    for (int num = top; num >= bottom; num--) {
        long long res = num;
        res *= res;
        stringstream ss;
        ss << res;
        string t = ss.str();
        vector<int> vt = format(t);
        if (vs.size() == vt.size()) {
            bool equal = true;
            for (int i = 0; i < vs.size(); i++) {
                if (vs[i] != vt[i]) {
                    equal = false;
                    break;
                }
            }
            if (equal) return res;
        }
    }
    return -1;
}

