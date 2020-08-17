// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-time-difference.html .

using namespace std;

#include <algorithm>
#include <iomanip>
#include <sstream>

int time_to_num(string time) {
    return stoi(time.substr(0, 2)) * 60 + stoi(time.substr(3, 2));
}

string num_to_time(int num) {
    stringstream ss;
    ss << fixed << setw(2) << setfill('0') << (num / 60);
    ss << ":";
    ss << fixed << setw(2) << setfill('0') << (num % 60);
    return ss.str();
}

std::string solve(std::vector<std::string> times) {
    vector<int> nums;
    for (auto time : times) {
        nums.push_back(time_to_num(time));
    }
    auto it = unique(nums.begin(), nums.end());
    nums.resize(distance(nums.begin(), it));
    sort(nums.begin(), nums.end());
    int res = 0;
    for (int i = 1; i < nums.size(); i++) {
        res = max(res, nums[i] - nums[i - 1] - 1);
    }
    res = max(res, 24 * 60 - nums[nums.size() - 1] - 1 + nums[0]);
    return num_to_time(res);
}
