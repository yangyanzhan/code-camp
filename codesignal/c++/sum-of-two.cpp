// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/sum-of-two.html .

bool sumOfTwo(std::vector<int> a, std::vector<int> b, int v) {
    using namespace std;
    set<int> cache;
    for (auto num : a) {
        cache.insert(num);
    }
    for (auto n1 : b) {
        int n2 = v - n1;
        if (cache.find(n2) != cache.end()) {
            return true;
        }
    }
    return false;
}
