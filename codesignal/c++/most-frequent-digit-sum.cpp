// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/most-frequent-digit-sum.html .

int x(int n) {
    int res = 0;
    while (n > 0) {
        res += (n % 10);
        n /= 10;
    }
    return res;
}

int mostFrequentDigitSum(int n) {
    map<int, int> mapping;
    mapping[0] = 1;
    while (n != 0) {
        int dec = x(n);
        if (mapping.find(dec) == mapping.end()) {
            mapping[dec] = 0;
        }
        mapping[dec]++;
        n -= dec;
    }
    int best, bestCount = 0;
    for (auto pair : mapping) {
        int key = pair.first, count = pair.second;
        if (count >= bestCount) {
            bestCount = count;
            best = key;
        }
    }
    return best;
}
