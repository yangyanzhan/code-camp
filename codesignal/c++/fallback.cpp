// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/fallback.html .

std::string fallBack(std::string time) {
    using namespace std;
    stringstream ss(time);
    int h, m;
    char ch;
    string tag = time.substr(time.size() - 2, 2);
    ss >> h >> ch >> m;
    if (h == 1) {
        h = 12;
    } else if (h == 12) {
        h--;
        tag = tag == "AM" ? "PM" : "AM";
    } else {
        h--;
    }
    string res = to_string(h) + ":" + (m < 10 ? "0" : "") + to_string(m) + tag;
    return res;
}

