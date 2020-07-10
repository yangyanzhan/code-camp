// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/christmas-tree.html .

std::string nchars(char c, int n) {
    stringstream ss;
    while (n-- > 0) {
        ss << c;
    }
    return ss.str();
}

bool replace(std::string &str, const std::string &from, const std::string &to) {
    size_t start_pos = str.find(from);
    if (start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}

std::vector<std::string> christmasTree(int levelNum, int levelHeight) {
    vector<string> result;
    vector<string> middles;
    vector<string> foot;
    string topCrown = "*";
    string lastMiddleItem = "*";
    string middleItem = "***";
    string bottomCrown;

    for (int j = 0; j < levelNum; j++) {
        for (int i = 1; i <= levelHeight; i++) {
            if (j == 0) {
                if (i > 0) {
                    topCrown = " " + topCrown;
                }
            }
            middleItem = "*" + middleItem + "*";
            lastMiddleItem = middleItem;
            middles.push_back(nchars(' ', levelHeight - i + levelNum - j - 1) +
                              middleItem);
        }
        topCrown = " " + topCrown;
        middleItem = nchars('*', (j + 2) * 2 + 1);
    }

    if (levelHeight % 2 == 0) {
        levelHeight++;
        bottomCrown = nchars(' ', (lastMiddleItem.length() - levelHeight) / 2) +
                      nchars('*', levelHeight);
    } else {
        bottomCrown = nchars(' ', (lastMiddleItem.length() - levelHeight) / 2) +
                      nchars('*', levelHeight);
    }

    for (int j = 0; j < levelNum; j++) {
        foot.push_back(bottomCrown);
    }
    result.push_back(topCrown);
    result.push_back(topCrown);
    replace(topCrown, " *", "***");
    result.push_back(topCrown);
    for (string s : middles) {
        result.push_back(s);
    }
    for (string s : foot) {
        result.push_back(s);
    }
    return result;
}
