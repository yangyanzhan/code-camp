// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/is-information-consistent.html .

bool isInformationConsistent(std::vector<std::vector<int>> evidences) {
    using namespace std;
    int m = evidences.size(), n = evidences[0].size();
    for (int j = 0; j < n; j++) {
        set<int> nums;
        for (int i = 0; i < m; i++) {
            int num = evidences[i][j];
            if (num != 0) {
                nums.insert(num);
            }
        }
        if (nums.size() > 1) {
            return false;
        }
    }
    return true;
}
