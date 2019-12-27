// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/chess-clock-sum-of-digits.html .

int stot(std::string str) {
    using namespace std;
    return (str[0] - '0') * 60 + stoi(str.substr(2, 2));
}

int ttosum(int t) {
    int min = t / 60, sec = t % 60;
    return min + sec / 10 + sec % 10;
}

std::vector<int> chessClockSumOfDigits(std::vector<std::string> initialTime, int k) {
    using namespace std;
    int a = stot(initialTime[0]), b = stot(initialTime[1]);
    int mini = numeric_limits<int>::max(), maxi = numeric_limits<int>::min();
    for (int i = 0; i <= min(a, k); i++) {
        int a1 = a - i;
        for (int j = 0; j <= min(b, k - i); j++) {
            int b1 = b - j;
            int sum = ttosum(a1) + ttosum(b1);
            mini = min(mini, sum);
            maxi = max(maxi, sum);
        }
    }
    return {max(mini, 1), maxi};
}

