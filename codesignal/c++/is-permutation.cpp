// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/is-permutation.html .

bool isPermutation(int n, std::vector<int> inputArray) {
    using namespace std;
    if (inputArray.size() != n) {
        return false;
    }
    vector<bool> cache(n, false);
    for (auto num : inputArray) {
        if (num < 1 || num > n) {
            return false;
        }
        cache[num - 1] = true;
    }
    for (int i = 0; i < n; i++) {
        if (!cache[i]) {
            return false;
        }
    }
    return true;
}
