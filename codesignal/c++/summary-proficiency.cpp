// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/summary-proficiency.html .

int summaryProficiency(std::vector<int> a, int n, int m) {
    using namespace std;
    int res = 0, count = 0;
    for (auto num : a) {
        if (count >= n) {
            break;
        }
        if (num >= m) {
            res += num;
            count++;
        }
    }
    return res;
}
