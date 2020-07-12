// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/most-valuable-character.html .

using namespace std;

char solve(string s) {
    map<char, int> cache;
    char res;
    int max_dist = -1;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        char now = s[i];
        if (cache.find(now) == cache.end()) {
            int dist = 0;
            for (int j = n - 1; j >= i; j--) {
                if (s[j] == now) {
                    dist = j - i;
                    break;
                }
            }
            if (dist > max_dist) {
                res = now;
                max_dist = dist;
            } else if (dist == max_dist && now < res) {
                res = now;
                max_dist = dist;
            }
            cache[now] = dist;
        }
    }
    return res;
}
