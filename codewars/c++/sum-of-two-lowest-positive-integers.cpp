// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/sum-of-two-lowest-positive-integers.html .

#include <algorithm>
#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers) {
    using namespace std;
    vector<long> cache{numbers[0], numbers[1]};
    make_heap(cache.begin(), cache.end());
    for (int i = 2; i < numbers.size(); i++) {
        cache.push_back(numbers[i]);
        push_heap(cache.begin(), cache.end());
        pop_heap(cache.begin(), cache.end());
        cache.pop_back();
    }
    return cache[0] + cache[1];
}
