// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/digit-distance-number.html .

int digitDistanceNumber(int n) {
    using namespace std;
    string item1 = to_string(n);
    string item2 = "";
    for (int i = 1; i < item1.size(); i++) {
        item2 += to_string(abs(item1[i] - item1[i - 1]));
    }
    return stoi(item2);
}

