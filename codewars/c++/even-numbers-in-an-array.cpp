// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/even-numbers-in-an-array.html .

#include <vector>

std::vector<int> evenNumbers(std::vector<int> arr, int n) {
    using namespace std;
    int count = 0;
    vector<int> res;
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (count >= n) {
            break;
        }
        int num = arr[i];
        if (num % 2 == 0) {
            count++;
            res.push_back(num);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
