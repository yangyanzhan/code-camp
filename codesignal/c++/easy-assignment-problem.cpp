// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/easy-assignment-problem.html .

std::vector<int> easyAssignmentProblem(std::vector<std::vector<int>> skills) {
    using namespace std;
    int s1 = skills[0][0] + skills[1][1];
    int s2 = skills[0][1] + skills[1][0];
    if (s1 > s2) {
        return {1, 2};
    }
    return {2, 1};
}
