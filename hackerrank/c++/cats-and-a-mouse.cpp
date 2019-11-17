// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/cats-and-a-mouse.html .

string catAndMouse(int x, int y, int z) {
    if (x == y) {
        return "Mouse C";
    }
    if (z <= min(x, y)) {
        return x < y ? "Cat A" : "Cat B";
    }
    if (z >= max(x, y)) {
        return x > y ? "Cat A" : "Cat B";
    }
    if (2 * z == x + y) {
        return "Mouse C";
    }
    int diff1 = abs(x - z), diff2 = abs(y - z);
    return diff1 < diff2 ? "Cat A" : "Cat B";
}
