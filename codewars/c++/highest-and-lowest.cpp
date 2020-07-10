// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/highest-and-lowest.html .

#include <algorithm>
#include <regex>
#include <sstream>
#include <string>
#include <vector>

std::string highAndLow(const std::string &numbers) {
    using namespace std;
    regex reg("-?\\d+");
    vector<int> nums;
    for (auto it = sregex_iterator(numbers.begin(), numbers.end(), reg);
         it != sregex_iterator(); it++) {
        nums.push_back(stoi(it->str()));
    }
    sort(nums.begin(), nums.end());
    stringstream ss;
    ss << nums.back() << " " << nums.front();
    return ss.str();
}
