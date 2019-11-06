// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

string kangaroo(int x1, int v1, int x2, int v2) {
    int a = x1 - x2, b = v1 - v2;
    if (x1 == x2) {
        return "YES";
    }
    if (a * b >= 0) {
        return "NO";
    }
    return a % b == 0 ? "YES" : "NO";
}
