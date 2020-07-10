// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/form-the-minimum.html .

#include <vector>

using namespace std;

unsigned long long minValue(vector<int> values) {
    sort(values.begin(), values.end());
    values.resize(
        distance(values.begin(), unique(values.begin(), values.end())));
    string res = "";
    for (auto v : values) {
        res += to_string(v);
    }
    return stoull(res);
}
