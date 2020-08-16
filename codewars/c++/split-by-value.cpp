// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/split-by-value.html .

using namespace std;

std::vector<int> split_by_value(int k, std::vector<int> elements) {
    vector<int> r1, r2;
    for (auto num : elements) {
        if (num < k) {
            r1.push_back(num);
        } else {
            r2.push_back(num);
        }
    }
    vector<int> r;
    for (auto num : r1) {
        r.push_back(num);
    }
    for (auto num : r2) {
        r.push_back(num);
    }
    return r;
}
