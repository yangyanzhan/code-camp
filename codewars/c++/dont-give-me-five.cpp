// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/dont-give-me-five.html .

#include <iostream>
#include <string>

int dontGiveMeFive(int start, int end) {
    using namespace std;
    int n5 = 0;
    for (int num = start; num <= end; num++) {
        string item = to_string(num);
        if (item.find("5") != string::npos) {
            n5++;
        }
    }
    return (end - start + 1) - n5;
}
