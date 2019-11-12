// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

int beautifulBinaryString(string b) {
    int res = 0;
    for (int i = 0; i <= b.size() - 3; i++) {
        if (b[i] == '0' && b[i + 1] == '1' && b[i + 2] == '0') {
            b[i + 2] = '1';
            res++;
        }
    }
    return res;
}
