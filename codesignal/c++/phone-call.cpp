// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/phone-call.html .

int phoneCall(int min1, int min2_10, int min11, int s) {
    if (s < min1) {
        return 0;
    } else if (s == min1) {
        return 1;
    } else if (s <= min1 + 9 * min2_10) {
        return 1 + (s - min1) / min2_10;
    } else {
        return 10 + (s - min1 - 9 * min2_10) / min11;
    }
}
