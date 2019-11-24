// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/next-second.html .

std::vector<int> nextSecond(std::vector<int> currentTime) {
    using namespace std;
    int carry = 1, h = currentTime[0], m = currentTime[1], s = currentTime[2];
    s += carry;
    carry = s / 60;
    s %= 60;
    m += carry;
    carry = m / 60;
    m %= 60;
    h += carry;
    h %= 24;
    return vector<int>{h, m, s};
}
