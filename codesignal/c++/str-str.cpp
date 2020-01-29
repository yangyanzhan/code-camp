// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/str-str.html .

int strstr(std::string s, std::string x) {
    if (x.size() <= s.size()) {
        typedef unsigned long long hash_t;
        const hash_t a = 0x5851F42D4C957F2DuLL;
        hash_t p = 0, h = 0, z = 1;
        for (const auto& c : x) {
            p = p * a + c;
        }
        int i = 0;
        for (int e = x.size() - 1; i < e; i++) {
            h = h * a + s[i];
            z *= a;
        }
        for (int j = 0, e = s.size(); i < e; i++, j++) {
            h = h * a + s[i];
            if (h == p && std::equal(x.begin(), x.end(), s.begin() + j))
                return j;
            h -= s[j] * z;
        }
    }
    return -1;
}

