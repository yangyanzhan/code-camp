// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/remove-duplicate-strings.html .

std::vector<std::string>
removeDuplicateStrings(std::vector<std::string> inputArray) {
    using namespace std;
    vector<string> res;
    string pre = "";
    for (auto now : inputArray) {
        if (now != pre) {
            res.push_back(now);
            pre = now;
        }
    }
    return res;
}
