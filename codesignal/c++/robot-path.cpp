// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/robot-path.html .

std::vector<int> robotPath(std::string instructions, int bound) {
    using namespace std;
    int x = 0, y = 0;
    for (auto ch: instructions) {
        if (ch == 'L') {
            x--;
        } else if (ch == 'R') {
            x++;
        } else if (ch == 'U') {
            y++;
        } else if (ch == 'D') {
            y--;
        }
        x = max(min(x, bound), -bound);
        y = max(min(y, bound), -bound);
    }
    return {x, y};
}

