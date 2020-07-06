// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/largest-number.html .

bool cmp(int a, int b) {
    stringstream ss;
    ss << a << b;
    long long ab = stoll(ss.str());
    ss.str("");
    ss << b << a;
    long long ba = stoll(ss.str());
    return ab > ba;
}

string trim(string s) {
    int n = s.length(), i;
    for (i = 0; i < n; i++) {
        if (s[i] != '0') {
            break;
        }
    }
    if (i == n) {
        return "0";
    } else if (i > 0) {
        s.erase(s.begin(), s.begin() + i);
    }
    return s;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<int> B = A;
    sort(B.begin(), B.end(), cmp);
    stringstream ss;
    for (int i = 0; i < B.size(); i++) {
        ss << B[i];
    }
    return trim(ss.str());
}
