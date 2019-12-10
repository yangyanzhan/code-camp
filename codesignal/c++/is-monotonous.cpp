// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/is-monotonous.html .

bool isMonotonous(std::vector<int> sequence) {
    using namespace std;
    if (sequence.size() <= 1) {
        return true;
    }
    if (sequence.size() == 2) {
        return sequence[0] != sequence[1];
    }
    for (int i = 2; i < sequence.size(); i++) {
        if (sequence[i - 2] < sequence[i - 1] && sequence[i - 1] < sequence[i]) {
        } else if (sequence[i - 2] > sequence[i - 1] && sequence[i - 1] > sequence[i]) {
        } else {
            return false;
        }
    }
    return true;
}

