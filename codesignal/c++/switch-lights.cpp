// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/switch-lights.html .

std::vector<int> switchLights(std::vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            for (int j = 0; j <= i; j++) {
                nums[j] = 1 - nums[j];
            }
        }
    }
    return nums;
}

