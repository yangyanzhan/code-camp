// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/almost-increasing-sequence.html .

bool almostIncreasingSequence(std::vector<int> sequence) {
    int n = sequence.size();
    int pre = sequence[0];
    bool has_seen_non_ascend = false;
    for (int i = 1; i < n; i++) {
        int now = sequence[i];
        if (pre >= now) {
            if (has_seen_non_ascend) {
                return false;
            }
            has_seen_non_ascend = true;
            if (i >= 2) {
                int ppre = sequence[i - 2];
                if (ppre < min(pre, now)) {
                    pre = min(pre, now);
                }
            } else {
                pre = min(pre, now);
            }
        } else {
            pre = now;
        }
    }
    return true;
}
