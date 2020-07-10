// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/parallel-lines.html .

bool parallelLines(std::vector<int> line1, std::vector<int> line2) {
    int a1 = line1[0], b1 = line1[1], c1 = line1[2];
    int a2 = line2[0], b2 = line2[1], c2 = line2[2];
    return a1 * b2 == a2 * b1;
}
