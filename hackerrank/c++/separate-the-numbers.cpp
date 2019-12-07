// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/separate-the-numbers.html .

bool separateNumbers(string s, int l) {
    long long num = stoll(s.substr(0, l)), ori = num;
    int cnt = 0;
    while (cnt < s.size()) {
        string t = to_string(num);
        if (cnt + t.size() > s.size()) {
            return false;
        }
        string u = s.substr(cnt, t.size());
        if (u != t) {
            return false;
        }
        cnt += t.size();
        num++;
    }
    cout << "YES " << ori << endl;
    return true;
}

void separateNumbers(string s) {
    int n = s.size();
    if (n <= 1 || s[0] == '0') {
        cout << "NO" << endl;
        return;
    }
    for (int l = 1; l <= n / 2; l++) {
        if (separateNumbers(s, l)) {
            return;
        }
    }
    cout << "NO" << endl;
}
