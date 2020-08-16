// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-fun-22-is-smooth.html .

using namespace std;

#include <vector>

bool isSmooth(const std::vector<int> &arr) {
    int n = arr.size();
    int n1 = arr[0];
    int n2 = arr[n - 1];
    int n3;
    if (n % 2 != 0) {
        n3 = arr[n / 2];
    } else {
        n3 = arr[n / 2 - 1] + arr[n / 2];
    }
    return n1 == n3 && n3 == n2;
}
