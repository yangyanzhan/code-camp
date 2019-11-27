// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/longest-sequence.html .

int longestSequence(std::vector<int> nums) {
    using namespace std;
    vector<vector<int>> cache;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        cache.push_back(vector<int>(n, 0));
    }
    int res = 0;
    for (int end = n - 1; end >= 0; end--) {
        for (int start = end; start >= 0; start--) {
            int count = 2;
            if (start == end) {
                count = 1;
            } else {
                int a = nums[start], b = nums[end], c = b + (b - a);
                for (int i = end + 1; i < n; i++) {
                    if (nums[i] == c) {
                        count = 1 + cache[end][i];
                        break;
                    }
                }
            }
            res = max(res, count);
            cache[start][end] = count;
        }
    }
    return res;
}

