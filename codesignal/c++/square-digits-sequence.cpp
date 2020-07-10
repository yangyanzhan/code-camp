// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/square-digits-sequence.html .

int next(int n) {
    int res = 0;
    while (n > 0) {
        res += (n % 10) * (n % 10);
        n /= 10;
    }
    return res;
}

int squareDigitsSequence(int n) {
    using namespace std;
    set<int> nums;
    nums.insert(n);
    while (true) {
        n = next(n);
        if (nums.find(n) != nums.end()) {
            break;
        }
        nums.insert(n);
    }
    return nums.size() + 1;
}
