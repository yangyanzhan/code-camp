// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/generate-all-parentheses-ii.html .

vector<vector<string>> cache = {{}, {"()"}};

vector<string> Solution::generateParenthesis(int A) {
    if (A < cache.size()) {
        return cache[A];
    }
    vector<string> res;
    for (int i = 1; i <= A - 1; i++) {
        int j = A - i;
        vector<string> heads = generateParenthesis(i),
                       tails = generateParenthesis(j);
        for (auto head : heads) {
            for (auto tail : tails) {
                res.push_back(head + tail);
            }
        }
    }
    vector<string> items = generateParenthesis(A - 1);
    for (auto item : items) {
        res.push_back("(" + item + ")");
    }
    sort(res.begin(), res.end());
    auto it = unique(res.begin(), res.end());
    res.resize(it - res.begin());
    cache.push_back(res);
    return res;
}
