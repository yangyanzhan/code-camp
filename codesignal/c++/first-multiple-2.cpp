// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/first-multiple-2.html .

int firstMultiple2(std::vector<int> divisors, int start) {
    using namespace std;
    int n = start;
    while (true) {
        bool valid = false;
        for (auto num: divisors) {
            if (n % num == 0) {
                valid = true;
            }
        }
        if (valid) {
            return n;
        }
        n++;
    }
    return -1;
}

