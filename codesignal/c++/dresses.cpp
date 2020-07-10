// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/dresses.html .

std::vector<int> dresses(std::vector<std::string> colors) {
    using namespace std;
    vector<int> res;
    for (int i = 0; i < colors.size(); i++) {
        string color = colors[i];
        int r = stoi(color.substr(0, 2), nullptr, 16);
        int g = stoi(color.substr(2, 2), nullptr, 16);
        int b = stoi(color.substr(4, 2), nullptr, 16);
        if (g > r && g > b) {
            res.push_back(i);
        }
    }
    return res;
}
