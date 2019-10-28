// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

string reverseShuffleMerge(string s) {
    map<char, int> cnts1, cnts2;
    for (char ch : s) {
        if (cnts1.find(ch) == cnts1.end()) {
            cnts1[ch] = 0;
        }
        cnts1[ch]++;
    }
    for (auto pair : cnts1) {
        cnts2[pair.first] = pair.second / 2;
    }
    vector<char> res;
    for (int i = s.size() - 1; i >= 0; i--) {
        char now = s[i];
        if (cnts2[now] > 0) {
            while (!res.empty()) {
                char last = res[res.size() - 1];
                if (last > now) {
                    int required = cnts2[last] + 1;
                    if (cnts1[last] >= required) {
                        res.pop_back();
                        cnts2[last]++;
                    } else {
                        break;
                    }
                } else {
                    break;
                }
            }
            res.push_back(now);
            cnts2[now]--;
        }
        cnts1[now]--;
    }
    return string(res.begin(), res.end());
}
