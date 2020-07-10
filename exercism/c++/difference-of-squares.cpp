// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/exercism/difference-of-squares.html .

// difference_of_squares.h

class difference_of_squares {
  public:
    static long long square_of_sum(long long n);
    static long long sum_of_squares(long long n);
    static long long difference(long long n);
};

// difference_of_squares.cpp

#include "difference_of_squares.h"

long long difference_of_squares::square_of_sum(long long n) {
    long long res = n * (n + 1) / 2;
    return res * res;
}

long long difference_of_squares::sum_of_squares(long long n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}

long long difference_of_squares::difference(long long n) {
    return square_of_sum(n) - sum_of_squares(n);
}
