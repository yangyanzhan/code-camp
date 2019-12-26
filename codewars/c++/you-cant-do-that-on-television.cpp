// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/you-cant-do-that-on-television.html .

#include <vector>

using namespace std;

class EightiesKids5 {
public:
    static string bucketOf(const string &said) {
        string line = said;
        for (auto &ch: line) {
            ch = tolower(ch);
        }
        bool has_water = false;
        bool has_slime = false;
        vector<string> items = {"water", "wet", "wash"};
        for (auto item: items) {
            if (line.find(item) != string::npos) {
                has_water = true;
                break;
            }
        }
        items = {"i don't know", "slime"};
        for (auto item: items) {
            if (line.find(item) != string::npos) {
                has_slime = true;
                break;
            }
        }
        if (has_water && has_slime) {
            return "sludge";
        }
        if (has_water) {
            return "water";
        }
        if (has_slime) {
            return "slime";
        }
        return "air";
    }
};

