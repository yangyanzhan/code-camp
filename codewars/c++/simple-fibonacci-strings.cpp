// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-fibonacci-strings.html .

using namespace std;

map<int, string> cache = {{0, "0"}, {1, "01"}};

std::string solve(int n) {
    if (cache.find(n) != cache.end()) {
        return cache[n];
    }
    string res = solve(n - 1) + solve(n - 2);
    cache[n] = res;
    return res;
}
