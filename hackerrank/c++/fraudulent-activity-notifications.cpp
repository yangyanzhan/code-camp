// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/fraudulent-activity-notifications.html .

int activityNotifications(vector<int> expenditure, int d) {
    int n = expenditure.size();
    if (n <= d) {
        return 0;
    }
    int res = 0;
    vector<int> nums(expenditure.begin(), expenditure.begin() + d);
    sort(nums.begin(), nums.end());
    for (int i = d; i < n; i++) {
        float median = 0;
        if (d % 2 == 1) {
            median = nums[d / 2];
        } else {
            median = (nums[d / 2 - 1] + nums[d / 2]) / 2.0;
        }
        int pre = expenditure[i - d], now = expenditure[i];
        if (median * 2 <= now) {
            res++;
        }
        auto it = lower_bound(nums.begin(), nums.end(), pre);
        nums.erase(it);
        it = lower_bound(nums.begin(), nums.end(), now);
        nums.insert(it, now);
    }
    return res;
}
