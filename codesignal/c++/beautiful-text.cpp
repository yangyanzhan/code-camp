// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/beautiful-text.html .

bool beautifulText(std::string inputString, int l, int r) {
    for (int n = l; n <= r; n++) {
        if (inputString.size() % (n + 1) == 0) {
        } else if ((inputString.size() + 1) % (n + 1) == 0) {
        } else {
            continue;
        }
        bool valid = true;
        for (int i = 0; i < inputString.size() / (n + 1); i++) {
            if (inputString[(i + 1) * (n + 1) - 1] != ' ') {
                valid = false;
                break;
            }
        }
        if (valid) {
            return true;
        }
    }
    return false;
}
