// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/iq-address.html .

std::string iqAddress(int n) {
    using namespace std;
    string res;
    char word[100];
    if (n == 0)
        return res;
    while (n > 1) {
        double residue = n - 10.5 * floor(n / 10.5);
        sprintf(word, "%.1f", residue);
        res = word + res;
        n = (int)round(n / 2.0);
    }
    res = "1" + res;
    return res;
}
