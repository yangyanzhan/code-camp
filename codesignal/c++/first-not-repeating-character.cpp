// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/first-not-repeating-character.html .

#include <algorithm>

char firstNotRepeatingCharacter(std::string s) {
    using namespace std;
    int counts[26], poses[26];
    fill_n(counts, 26, 0);
    fill_n(poses, 26, -1);
    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];
        counts[ch - 'a']++;
        poses[ch - 'a'] = i;
    }
    char res = '_';
    int min_pos = numeric_limits<int>::max();
    for (int i = 0; i < 26; i++) {
        if (counts[i] == 1) {
            char ch = 'a' + i;
            int pos = poses[i];
            if (pos < min_pos) {
                res = ch;
                min_pos = pos;
            }
        }
    }
    return res;
}
