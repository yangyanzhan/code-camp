// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-frequency-sort.html .

using namespace std;

#include <map>
#include <vector>

std::vector<int> solve(const std::vector<int> &vec) {
    map<int, int> cache;
    for (auto num : vec) {
        if (cache.find(num) == cache.end()) {
            cache[num] = 0;
        }
        cache[num]++;
    }
    vector<int> res(vec.begin(), vec.end());
    sort(res.begin(), res.end(), [&cache](int n1, int n2) {
        int c1 = cache[n1], c2 = cache[n2];
        if (c1 != c2) {
            return c1 > c2;
        } else {
            return n1 < n2;
        }
    });
    return res;
}
