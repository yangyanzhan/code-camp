// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/substring-concatenation.html .

vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    int m = B.size(), n = B[0].length();
    map<string, int> counts;
    for (string b : B) {
        if (counts.find(b) == counts.end()) {
            counts[b] = 0;
        }
        counts[b]++;
    }
    vector<int> res;
    for (int i = 0; i < A.length(); i++) {
        map<string, int> cache = counts;
        if (i + m * n - 1 >= A.length()) {
            break;
        }
        bool found = true;
        for (int j = 0; j < m; j++) {
            string part = A.substr(i + n * j, n);
            if (cache.find(part) == cache.end()) {
                found = false;
                break;
            }
            cache[part]--;
        }
        if (found) {
            for (auto pair : cache) {
                if (pair.second > 0) {
                    found = false;
                    break;
                }
            }
        }
        if (found) {
            res.push_back(i);
        }
    }
    return res;
}
