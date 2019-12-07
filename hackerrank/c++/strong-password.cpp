// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/strong-password.html .

bool has_char(string word, string pool) {
    for (auto ch: word) {
        if (pool.find(ch) != string::npos) {
            return true;
        }
    }
    return false;
}

int minimumNumber(int n, string password) {
    int m = password.size(), res = 0;
    if (!has_char(password, "0123456789")) {
        res++;
    }
    if (!has_char(password, "abcdefghijklmnopqrstuvwxyz")) {
        res++;
    }
    if (!has_char(password, "ABCDEFGHIJKLMNOPQRSTUVWXYZ")) {
        res++;
    }
    if (!has_char(password, "!@#$%^&*()-+")) {
        res++;
    }
    m += res;
    if (m < 6) {
        res += 6 - m;
    }
    return res;
}
