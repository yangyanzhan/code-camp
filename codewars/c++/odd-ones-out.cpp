// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/odd-ones-out.html .

#include <map>
#include <vector>

std::vector<int> oddOnesOut(const std::vector<int> &numbers) {
    using namespace std;
    map<int, int> cache;
    for (auto num : numbers) {
        if (cache.find(num) == cache.end()) {
            cache[num] = 0;
        }
        cache[num]++;
    }
    vector<int> res;
    for (auto num : numbers) {
        if (cache[num] % 2 == 0) {
            res.push_back(num);
        }
    }
    return res;
}
