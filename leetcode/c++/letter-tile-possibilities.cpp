// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/letter-tile-possibilities.html .

class Solution {
public:
    int numTilePossibilities(string tiles) {
        set<string> cache;
        sort(tiles.begin(), tiles.end());
        do {
            int n = tiles.size();
            for (int len = 1; len <= n; len++) {
                for (int i = 0; i <= n - len; i++) {
                    cache.insert(tiles.substr(i, len));
                }
            }
        } while (next_permutation(tiles.begin(), tiles.end()));
        return cache.size();
    }
};

