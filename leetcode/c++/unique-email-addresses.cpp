// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/unique-email-addresses.html .

class Solution {
  public:
    int numUniqueEmails(vector<string> &emails) {
        set<string> cache;
        for (auto email : emails) {
            auto part1 = email.substr(0, email.find("@"));
            auto part2 = email.substr(email.find("@"));
            if (part1.find("+") != string::npos) {
                part1 = part1.substr(0, part1.find("+"));
            }
            regex reg("(\\.)+");
            while (regex_search(part1.begin(), part1.end(), reg)) {
                part1 = regex_replace(part1, reg, "");
            }
            cache.insert(part1 + part2);
        }
        return cache.size();
    }
};
