// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/oring-arrays.html .

#include <vector>

using namespace std;

std::vector<int> orArrays(const std::vector<int> &arr1,
                          const std::vector<int> &arr2, int default_value = 0) {
    vector<int> res;
    int n = max(arr1.size(), arr2.size());
    for (int i = 0; i < n; i++) {
        int num1 = i < arr1.size() ? arr1[i] : default_value;
        int num2 = i < arr2.size() ? arr2[i] : default_value;
        res.push_back(num1 | num2);
    }
    return res;
}
