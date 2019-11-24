// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/add-border.html .

std::vector<std::string> addBorder(std::vector<std::string> picture) {
    using namespace std;
    vector<string> res;
    string header = "";
    for (int i = 0; i < picture[0].size(); i++) {
        header += "*";
    }
    header += "**";
    res.push_back(header);
    for (auto row: picture) {
        res.push_back("*" + row + "*");
    }
    res.push_back(header);
    return res;
}
