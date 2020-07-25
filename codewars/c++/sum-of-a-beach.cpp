// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/sum-of-a-beach.html .

using namespace std;

int sum_of_a_beach(string s) {
    vector<string> words = {"sand", "water", "fish", "sun"};
    for (auto &ch : s) {
        ch = tolower(ch);
    }
    int res = 0;
    int idx = 0;
    while (idx < s.size()) {
        bool found = false;
        for (auto word : words) {
            int idx1 = s.find(word, idx);
            if (idx1 == idx) {
                found = true;
                idx += word.size();
                res++;
                break;
            }
        }
        if (!found) {
            idx++;
        }
    }
    return res;
}
