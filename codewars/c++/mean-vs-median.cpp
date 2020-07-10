// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/mean-vs-median.html .

#include <algorithm>

std::string meanVsMedian(std::vector<int> numbers) {
    int n = numbers.size();
    sort(numbers.begin(), numbers.end());
    double median;
    if (n % 2 == 0) {
        median = ((double)numbers[n / 2 - 1] + numbers[n / 2]) / 2;
    } else {
        median = numbers[n / 2];
    }
    long long sum = 0;
    for (auto num : numbers) {
        sum += num;
    }
    long long mean = sum / n;
    if (median > mean) {
        return "median";
    } else if (median < mean) {
        return "mean";
    }
    return "same";
}
