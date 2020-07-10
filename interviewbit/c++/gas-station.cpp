// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/gas-station.html .

int Solution::canCompleteCircuit(const vector<int> &gas, const vector<int> &cost) {
    int n = gas.size(), start = 0;
    while (start < n) {
        int g = 0, i;
        for (i = 0; i < n; i++) {
            int pos = (start + i) % n;
            g += gas[pos];
            if (g < cost[pos]) {
                break;
            }
            g -= cost[pos];
        }
        if (i == n) {
            break;
        } else {
            start = start + i + 1;
        }
    }
    return start >= n ? -1 : start;
}
