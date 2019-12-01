// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/rectangle-rotation.html .

int rectangleRotation(int a, int b) {
    int n1 = (int)floor(b / 2 / 1.414) * 2 + 1;
    int n2 = (int)floor(((b - 1.414) / 2) / 1.414) * 2 + 2;
    int n3 = (int)floor(a / 2 / 1.414) * 2 + 1;
    int n4 = (int)floor(((a - 1.414) / 2) / 1.414) * 2 + 2;
    return n1 * n3 + n2 * n4;
}

