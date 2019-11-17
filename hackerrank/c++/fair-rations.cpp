// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/fair-rations.html .

int fairRations(vector<int> nums) {
    int res = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] % 2 != 0) {
            res += 2;
            nums[i + 1]++;
        }
    }
    if (nums[nums.size() - 1] % 2 == 0) {
        return res;
    }
    return -1;
}
