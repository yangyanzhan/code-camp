// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/single-character-palindromes.html .

using namespace std;

bool is_palin(string item) {
    int n = item.size();
    for (int i = 0; i < n / 2; i++) {
        if (item[i] != item[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

std::string solve(std::string s) {
    int n = s.size();
    int i = 0, j = n - 1;
    while (j - i >= 1) {
        if (s[i] != s[j]) {
            string t = s.substr(0, i) + s.substr(i + 1);
            if (is_palin(t)) {
                return "remove one";
            }
            t = s.substr(0, j) + s.substr(j + 1);
            if (is_palin(t)) {
                return "remove one";
            }
            return "not possible";
        }
        i++;
        j--;
    }
    return "OK";
}
