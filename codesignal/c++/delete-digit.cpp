// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/delete-digit.html .

int deleteDigit(int n) {
    using namespace std;
    string item = to_string(n);
    for (int i = 1; i < item.size(); i++) {
        if (item[i - 1] < item[i]) {
            return stoi(item.substr(0, i - 1) + item.substr(i));
        }
    }
    return stoi(item.substr(0, item.size() - 1));
}

