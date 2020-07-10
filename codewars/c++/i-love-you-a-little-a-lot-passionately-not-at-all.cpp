// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/i-love-you-a-little-a-lot-passionately-not-at-all.html .

std::string how_much_i_love_you(int nb_petals) {
    using namespace std;
    vector<string> cache = {"I love you",   "a little", "a lot",
                            "passionately", "madly",    "not at all"};
    int idx = nb_petals % 6 - 1;
    if (idx < 0) {
        idx += 6;
    }
    return cache[idx];
}
