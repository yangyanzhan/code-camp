// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

int jumpingOnClouds(vector<int> c) {
    int res = 0, pos = 0, n = c.size();
    while (pos < n - 1) {
        if (c[pos + 2]) {
            pos++;
        } else {
            pos += 2;
        }
        res++;
    }
    return res;
}
