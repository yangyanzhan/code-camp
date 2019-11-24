// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/dance-steps.html .

int danceSteps(std::string danceFloor) {
    using namespace std;
    vector<bool> visited(danceFloor.size(), false);
    int pos = 0, step = 0;
    while (!visited[pos]) {
        visited[pos] = true;
        int gap = danceFloor[pos] - '0';
        int target = (gap % 2 == 0) ? (pos + gap) : (pos - gap);
        if (gap == 0) {
            return step;
        }
        if (0 <= target && target < danceFloor.size()) {
            step += gap;
            pos = target;
        } else if (target < 0) {
            step += pos;
            return step;
        } else {
            step += danceFloor.size() - 1 - pos;
            return step;
        }
    }
    return -1;
}
