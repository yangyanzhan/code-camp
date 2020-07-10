// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/john-and-gcd-list.html .

int gcd(int a, int b) {
    if (a < b) {
        swap(a, b);
    }
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) { return a / gcd(a, b) * b; }

vector<int> solve(vector<int> nums) {
    vector<int> res{nums[0]};
    for (int i = 0; i < nums.size() - 1; i++) {
        int a = res[i], b = nums[i + 1], t = nums[i];
        int c = lcm(b, t);
        res.push_back(c);
    }
    res.push_back(nums.back());
    return res;
}
