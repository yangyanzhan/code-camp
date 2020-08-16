// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/every-possible-sum-of-two-digits.html .

using namespace std;

std::vector<int> digits(int n) {
    vector<int> res;
    auto item = to_string(n);
    int m = item.size();
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            int num = item[i] - '0' + item[j] - '0';
            res.push_back(num);
        }
    }
    return res;
}
