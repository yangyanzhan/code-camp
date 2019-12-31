// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/exercism/sum-of-multiples.html .

// sum_of_multiples.h

#include <vector>

using std::vector;

class sum_of_multiples {
    public:
    static int to(vector<int> factors, int ceiling);
};

// sum_of_multiples.cpp

#include "sum_of_multiples.h"

int sum_of_multiples::to(vector<int> factors, int ceiling) {
    int sum = 0;
    for (int num = 1; num < ceiling; num++) {
        if (any_of(factors.begin(), factors.end(), [&num] (int factor) {
            return num % factor == 0;
        })) {
            sum += num;
        }
    }
    return sum;
}

