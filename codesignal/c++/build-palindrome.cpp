// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/build-palindrome.html .

bool is_palin(std::string str) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != str[str.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

std::string buildPalindrome(std::string st) {
    using namespace std;
    for (int i = 0; i < st.size(); i++) {
        if (is_palin(st.substr(i))) {
            string tail = st.substr(0, i);
            reverse(tail.begin(), tail.end());
            return st + tail;
        }
    }
    return "";
}
