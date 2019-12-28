// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/find-heavy-ball-level-novice.html .

#include<vector>

unsigned int findBall(Scales scales) {
    using namespace std;
    int start = 0, end = 7;
    while (true) {
        int count = end - start + 1;
        if (count == 1) {
            return start;
        }
        vector<int> left;
        vector<int> right;
        for (int i = 0; i < count / 2; i++) {
            left.push_back(start + i);
        }
        for (int i = 0; i < count / 2; i++) {
            right.push_back(start + count / 2 + i);
        }
        int w = scales.getWeight(left, right);
        if (w == -1) {
            end = start + count / 2 - 1;
        } else if (w == 1) {
            start = start + count / 2;
        } else {
            return end;
        }
    }
    return -1;
}

