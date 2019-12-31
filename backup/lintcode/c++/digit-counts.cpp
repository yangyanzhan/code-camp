// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/lintcode/digit-counts.html .

class Solution {
public:
    /**
     * @param k: An integer
     * @param n: An integer
     * @return: An integer denote the count of digit k in 1..n
     */
    int digitCounts(int k, int n) {
        if (k == 0 && n == 0) {
            return 1;
        }
        int base = 1;
        int result = 0;
        while (n >= base) {
            int digit = (n / base) % 10;
            int startNum = n / base / 10;
            int endNum = n % base;
            if (digit < k) {
                result += startNum * base;
            } else if (digit == k) {
                if (k == 0) {
                    if (startNum == 1) {
                        result++;
                    } else {
                        result += startNum * base;
                    }
                    if (base == 1) {
                        result += 1;
                    }
                } else {
                    result += startNum * base + endNum + 1;
                }
            } else {
                if (k == 0 && startNum == 0) {
                    if (base == 1) {
                        result += 1;
                    }
                } else {
                    result += (startNum + 1) * base;
                }
            }
            base *= 10;
            cout << result << endl;
        }
        return result;
    }
};

