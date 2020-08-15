// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-directions-reversal.html .

using namespace std;

string t_b = "Begin on ";
string t_r = "Right on ";
string t_l = "Left on ";

vector<string> extract(string item) {
    vector<string> tokens = {t_b, t_r, t_l};
    int idx = string::npos;
    for (auto token : tokens) {
        idx = item.find(token);
        if (idx != string::npos) {
            return {token, item.substr(idx + token.size())};
        }
    }
    return {};
}

std::vector<std::string> solve(std::vector<std::string> v) {
    vector<vector<string>> items;
    vector<string> res;
    string pre_dir = t_b;
    for (int i = v.size() - 1; i >= 0; i--) {
        auto items = extract(v[i]);
        string dir = t_b;
        if (pre_dir == t_r) {
            dir = t_l;
        } else if (pre_dir == t_l) {
            dir = t_r;
        }
        res.push_back(dir + items[1]);
        pre_dir = items[0];
    }
    return res;
}
