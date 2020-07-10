// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/check-factorial.html .

bool checkFactorial(int n) {
    using namespace std;
    vector<long long> facts{1};
    for (long long i = 2; i <= 20; i++) {
        facts.push_back(facts[facts.size() - 1] * i);
    }
    for (auto fact : facts) {
        if (n == fact) {
            return true;
        }
    }
    return false;
}
