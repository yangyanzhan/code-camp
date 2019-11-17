// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/append-and-delete.html .

string appendAndDelete(string s, string t, int k) {
    int m = s.size(), n = t.size();
    if (k >= (m + n)) {
        return "Yes";
    }
    int same = 0;
    for (int i = 0; i < min(m, n); i++) {
        if (s[i] != t[i]) {
            break;
        }
        same++;
    }
    int mini = s.size() + t.size() - 2 * same;
    return (k >= mini && (k - mini) % 2 == 0) ? "Yes" : "No";
}
