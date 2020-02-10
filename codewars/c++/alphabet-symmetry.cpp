// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/alphabet-symmetry.html .

#include <vector>
#include <string>

std::vector<int> solve(std::vector<std::string> arr) {
    using namespace std;
    vector<int> res;
    for (auto item: arr) {
        int count = 0;
        for (int i = 0; i < item.size(); i++) {
            if (tolower(item[i]) - 'a' == i) {
                count++;
            }
        }
        res.push_back(count);
    }
    return res;
};

