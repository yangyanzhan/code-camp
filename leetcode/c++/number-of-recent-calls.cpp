// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/number-of-recent-calls.html .

class RecentCounter {
    int pre = 0;
    vector<int> times;
public:
    RecentCounter() {
    }

    int ping(int t) {
        times.push_back(t);
        int n = times.size();
        for (int i = pre; i < n; i++) {
            if ((t - 3000) <= times[i]) {
                pre = i;
                return n - i;
            }
        }
        return 0;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

