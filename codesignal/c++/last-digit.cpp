// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/last-digit.html .

int lastDigit(int a, int b) {
    using namespace std;
    a %= 10;
    int num = 1;
    vector<int> nums;
    for (int i = 1; i <= b; i++) {
        num *= a;
        num %= 10;
        auto it = find(nums.begin(), nums.end(), num);
        if (it == nums.end()) {
            nums.push_back(num);
        } else {
            int idx = distance(nums.begin(), it);
            int head = idx, len = nums.size() - idx;
            int offset = (b - head - 1) % len;
            num = nums[idx + offset];
            break;
        }
    }
    return num;
}

