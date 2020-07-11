// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/consecutive-letters.html .

using namespace std;

bool solve(std::string s) {
    sort(s.begin(), s.end());
    for (int i = 1; i < s.size(); i++) {
        int dist = s[i] - s[i - 1];
        if (dist != 1) {
            return false;
        }
    }
    return true;
}
