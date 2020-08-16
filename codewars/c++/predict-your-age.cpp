// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/predict-your-age.html .

using namespace std;

#include <math.h>

int predictAge(int age1, int age2, int age3, int age4, int age5, int age6,
               int age7, int age8) {
    vector<int> ages = {age1, age2, age3, age4, age5, age6, age7, age8};
    int res = 0;
    for (auto age : ages) {
        res += age * age;
    }
    res = sqrt(res);
    res /= 2;
    return res;
}
