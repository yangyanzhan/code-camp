// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/max-sum-segments.html .

std::vector<int> maxSumSegments(std::vector<int> inputArray) {
    using namespace std;
    vector<int> res;
    int n = inputArray.size();
    for (int len = 1; len <= n; len++) {
        int sum = 0, best, best_i;
        for (int i = 0; i < len; i++) {
            sum += inputArray[i];
        }
        best = sum;
        best_i = 0;
        for (int i = 1; i + len <= n; i++) {
            sum -= inputArray[i - 1];
            sum += inputArray[i + len - 1];
            if (sum > best) {
                best = sum;
                best_i = i;
            }
        }
        res.push_back(best_i);
    }
    return res;
}

