// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/sum-of-differences-in-array.html .

#include <vector>
#include <algorithm>

int sumOfDifferences(const std::vector<int>& arr){
    using namespace std;
    vector<int> tmp(arr.begin(), arr.end());
    sort(tmp.begin(), tmp.end());
    int res = 0;
    for (int i = 1; i < tmp.size(); i++) {
        res += tmp[i] - tmp[i - 1];
    }
    return res;
}

