// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/numbers-with-this-digit-inside.html .

std::vector<long> numbersWithDigitInside(long x, long d) {
    using namespace std;
    long long count = 0, sum = 0, prod = 1;
    for (int n = 1; n <= x; n++) {
        string item = to_string(n);
        if (item.find(to_string(d)) != string::npos) {
            count++;
            sum += n;
            prod *= n;
        }
    }
    if (count == 0) {
        prod = 0;
    }
    return {count, sum, prod};
}
