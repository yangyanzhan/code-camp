// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/candles.html .

int candles(int candlesNumber, int makeNew) {
    int res = 0, remains = 0;
    while (candlesNumber > 0) {
        res += candlesNumber;
        remains += candlesNumber;
        candlesNumber = remains / makeNew;
        remains = remains % makeNew;
    }
    return res;
}
