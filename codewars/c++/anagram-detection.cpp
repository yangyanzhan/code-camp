// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/anagram-detection.html .

#include <string>
#include <algorithm>

bool isAnagram(std::string test, std::string original) {
    using namespace std;
    string a = test;
    for (auto &ch: a) {
        ch = tolower(ch);
    }
    string b = original;
    for (auto &ch: b) {
        ch = tolower(ch);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

