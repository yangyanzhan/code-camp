// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/number-minimization.html .

std::set<std::vector<int>> cache;

int numberMinimization(int n, int d) {
    using namespace std;
    string item = to_string(n);
    sort(item.begin(), item.end());
    int res = stoi(item);
    do {
        int n1 = stoi(item);
        if (n1 % d == 0 && cache.find({d, n1}) == cache.end()) {
            cache.insert({d, n1});
            res = min(res, numberMinimization(n1 / d, d));
        }
    } while (next_permutation(item.begin(), item.end()));
    return res;
}

