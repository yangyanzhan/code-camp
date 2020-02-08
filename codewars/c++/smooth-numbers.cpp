// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/smooth-numbers.html .

#include <string>

std::string isSmooth(unsigned long n) {
    using namespace std;
    vector<int> factors = {2, 3, 5, 7};
    int max_factor = -1;
    for (int i = 0; i < factors.size(); i++) {
        int factor = factors[i];
        while (n % factor == 0) {
            n /= factor;
            max_factor = factor;
        }
    }
    if (max_factor == -1 || n > 1) {
        return "non-smooth";
    } else if (max_factor == 2) {
        return "power of 2";
    } else if (max_factor == 3) {
        return "3-smooth";
    } else if (max_factor == 5) {
        return "Hamming number";
    } else if (max_factor == 7) {
        return "humble number";
    }
}

