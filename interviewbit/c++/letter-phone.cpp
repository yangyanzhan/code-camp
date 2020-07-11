// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/letter-phone.html .

vector<vector<string>> mapping = {{"0"},           {"1"},
                                  {"a", "b", "c"}, {"d", "e", "f"},
                                  {"g", "h", "i"}, {"j", "k", "l"},
                                  {"m", "n", "o"}, {"p", "q", "r", "s"},
                                  {"t", "u", "v"}, {"w", "x", "y", "z"}};

vector<string> Solution::letterCombinations(string A) {
    vector<int> nums;
    for (char ch : A) {
        nums.push_back(ch - '0');
    }
    vector<string> res;
    if (nums.size() == 0) {
        return res;
    }
    vector<string> heads = mapping[nums[0]];
    if (nums.size() == 1) {
        return heads;
    }
    vector<string> remains = letterCombinations(A.substr(1));
    for (string head : heads) {
        for (string remain : remains) {
            res.push_back(head + remain);
        }
    }
    return res;
}
