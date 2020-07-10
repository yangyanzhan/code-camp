// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/pascal-triangle.html .

vector<vector<int>> Solution::solve(int A) {
    vector<vector<int>> res;
    vector<int> pre = {1};
    vector<int> now = {1, 1};
    if (A >= 1) {
        res.push_back(pre);
    }
    if (A >= 2) {
        res.push_back(now);
    }
    if (A >= 3) {
        for (int i = 3; i <= A; i++) {
            pre = now;
            now.clear();
            now.push_back(1);
            for (int j = 1; j < pre.size(); j++) {
                now.push_back(pre[j - 1] + pre[j]);
            }
            now.push_back(1);
            res.push_back(now);
        }
    }
    return res;
}
