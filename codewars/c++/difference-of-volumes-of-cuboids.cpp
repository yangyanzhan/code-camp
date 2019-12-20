// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/difference-of-volumes-of-cuboids.html .

#include <array>

int findDifference(std::array<int, 3> a, std::array<int, 3> b) {
    long long r1 = (long long)a[0] * a[1] * a[2];
    long long r2 = (long long)b[0] * b[1] * b[2];
    return abs(r1 - r2);
}
