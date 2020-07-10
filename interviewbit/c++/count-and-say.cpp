// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/count-and-say.html .

string Solution::countAndSay(int n) {
    if (n == 1)
        return "1";
    string word = countAndSay(n - 1);
    int pre = word[0] - '0', count = 1, now;
    stringstream ss;
    for (int i = 1; i <= word.length(); i++) {
        bool diff = false;
        if (i == word.length()) {
            diff = true;
        } else {
            now = word[i] - '0';
            if (now != pre) {
                diff = true;
            }
        }
        if (diff) {
            ss << count << pre;
            count = 1;
        } else {
            count++;
        }
        pre = now;
    }
    return ss.str();
}
