// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/whose-turn.html .

bool whoseTurn(std::string p) {
    using namespace std;
    string ori = "b1;g1;b8;g8";
    int d1 = p[0] - ori[0] + p[1] - ori[1] + p[3] - ori[3] + p[4] - ori[4];
    int d2 = p[6] - ori[6] + p[7] - ori[7] + p[9] - ori[9] + p[10] - ori[10];
    return (d1 - d2) % 2 == 0;
}
