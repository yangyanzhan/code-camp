// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/detect-break-beat.html .

bool detectBreakbeat(std::string pattern) {
    using namespace std;
    regex reg("[^ ]+");
    vector<string> items;
    for (auto it = sregex_iterator(pattern.begin(), pattern.end(), reg);
         it != sregex_iterator(); it++) {
        items.push_back(it->str());
    }
    int n = items.size();
    if (n < 8) {
        return false;
    }
    int i1 = 0, i2 = n * 2 / 8, i3 = n * 3 / 8, i4 = n * 5 / 8, i5 = n * 6 / 8;
    if (items[i2] != items[i5]) {
        return false;
    }
    string a = items[i1];
    string b = items[i2];
    if (a == b) {
        return false;
    }
    if (a == "~" || b == "~") {
        return false;
    }
    if (items[i3] == a || items[i4] == a) {
        return true;
    }
    return false;
}
