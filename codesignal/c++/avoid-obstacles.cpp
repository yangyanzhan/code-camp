// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/avoid-obstacles.html .

int avoidObstacles(std::vector<int> inputArray) {
    using namespace std;
    for (int step = 2; ; step++) {
        bool valid = true;
        for (auto num: inputArray) {
            if (num % step == 0) {
                valid = false;
                break;
            }
        }
        if (valid) {
            return step;
        }
    }
    return -1;
}