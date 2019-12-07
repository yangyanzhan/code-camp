// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/three-split.html .

int threeSplit(std::vector<int> nums) {
    long long sum = 0;
    for (auto num: nums) {
        sum += num;
    }
    sum /= 3;
    int res = 0;
    long long s1 = 0;
    for (int i = 0; i < nums.size(); i++) {
        s1 += nums[i];
        if (s1 == sum) {
            long long s2 = 0;
            for (int j = i + 1; j < nums.size(); j++) {
                s2 += nums[j];
                if (s2 == sum) {
                    if (j < nums.size() - 1) {
                        res++;
                    }
                }
            }
        }
    }
    return res;
}

