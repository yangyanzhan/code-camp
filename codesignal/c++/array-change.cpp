// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/array-change.html .

int arrayChange(std::vector<int> inputArray) {
    using namespace std;
    int res = 0, pre = inputArray[0];
    for (int i = 1; i < inputArray.size(); i++) {
        int now = inputArray[i];
        if (now <= pre) {
            res += pre - now + 1;
            pre = pre + 1;
        } else {
            pre = now;
        }
    }
    return res;
}
