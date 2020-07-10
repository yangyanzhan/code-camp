// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/expressions-matter.html .

unsigned short int expressionsMatter(unsigned short int a, unsigned short int b,
                                     unsigned short int c) {
    using namespace std;
    int r1 = a * (b + c);
    int r2 = (a + b) * c;
    int r3 = a * b + c;
    int r4 = a + b * c;
    int r5 = a + b + c;
    int r6 = a * b * c;
    vector<int> rs{r1, r2, r3, r4, r5, r6};
    return *max_element(rs.begin(), rs.end());
}
