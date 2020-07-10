// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/find-permutation.html .

vector<int> Solution::findPerm(const string A, int B) {
    int dec = count(A.begin(), A.end(), 'D');
    int i = dec, j = dec + 1;
    vector<int> res{j++};
    for (int k = 0; k < A.length(); k++) {
        if (A[k] == 'I') {
            res.push_back(j++);
        } else {
            res.push_back(i--);
        }
    }
    return res;
}
