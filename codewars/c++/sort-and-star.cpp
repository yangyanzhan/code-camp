// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/sort-and-star.html .

std::string twoSort(std::vector<std::string> s) {
    using namespace std;
    sort(s.begin(), s.end());
    string t = s[0];
    if (t.size() == 0) {
        return "";
    }
    string res = "";
    res += t[0];
    for (int i = 1; i < t.size(); i++) {
        res += "***";
        res += t[i];
    }
    return res;
}
