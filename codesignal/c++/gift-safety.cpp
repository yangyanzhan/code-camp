// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/gift-safety.html .

int giftSafety(std::string gift) {
    using namespace std;
    int res = 0, n = gift.size();
    for (int i = 0; i + 2 < n; i++) {
        set<char> cache;
        cache.insert(gift[i]);
        cache.insert(gift[i + 1]);
        cache.insert(gift[i + 2]);
        if (cache.size() < 3) {
            res++;
        }
    }
    return res;
}

