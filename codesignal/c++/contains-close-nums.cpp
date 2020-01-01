// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/contains-close-nums.html .

bool containsCloseNums(std::vector<int> nums, int k) {
    using namespace std;
    map<int, int> cache;
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        if (cache.find(num) == cache.end()) {
            cache[num] = i;
        } else {
            int j = cache[num];
            if (i - j <= k) {
                return true;
            }
            cache[num] = i;
        }
    }
    return false;
}

