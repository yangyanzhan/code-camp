// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/orthogonal-lines.html .

bool orthogonalLines(std::vector<int> line1, std::vector<int> line2) {
    using namespace std;
    int a1 = line1[0], b1 = line1[1], a2 = line2[0], b2 = line2[1];
    return a1 * a2 + b1 * b2 == 0;
}

