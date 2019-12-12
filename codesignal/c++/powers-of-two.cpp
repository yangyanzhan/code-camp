// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/powers-of-two.html .

std::vector<int> powersOfTwo(int n) {
    using namespace std;
    vector<int> res;
    int base = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            res.push_back(base);
        }
        base *= 2;
        n /= 2;
    }
    return res;
}

