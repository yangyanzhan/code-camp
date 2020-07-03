// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/flip.html .

vector<int> Solution::flip(string A) {
    int n = A.length();
    int preI = 0, preJ = 0, pre = A[0] == '0' ? 1 : -1;
    int bestI = preI, bestJ = preJ, best = pre;
    for (int i = 1; i < n; i++) {
        int num = A[i] == '0' ? 1 : -1;
        if (pre >= 0) {
            pre += num;
            preJ = i;
        } else {
            pre = num;
            preI = i;
            preJ = i;
        }
        if (pre > best) {
            best = pre;
            bestI = preI;
            bestJ = preJ;
        }
    }
    vector<int> res;
    if (best > 0) {
        res.push_back(bestI + 1);
        res.push_back(bestJ + 1);
    }
    return res;
}
