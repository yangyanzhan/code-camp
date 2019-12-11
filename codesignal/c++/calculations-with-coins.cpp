// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/calculations-with-coins.html .

int calculationsWithCoins(int a, int b, int c) {
    using namespace std;
    set<int> cache;
    cache.insert(a);
    cache.insert(b);
    cache.insert(c);
    cache.insert(a + b);
    cache.insert(b + c);
    cache.insert(a + c);
    cache.insert(a + b + c);
    return cache.size();
}

