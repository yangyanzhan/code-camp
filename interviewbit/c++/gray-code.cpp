// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/gray-code.html .

vector<int> Solution::grayCode(int A) {
    vector<int> res;
    if (A == 0) {
        return res;
    } else if (A == 1) {
        return vector<int>{0, 1};
    } else {
        vector<int> nextCodes = grayCode(A - 1);
        for (vector<int>::iterator it = nextCodes.begin();
             it != nextCodes.end(); it++) {
            res.push_back(*it);
        }
        for (vector<int>::reverse_iterator it = nextCodes.rbegin();
             it != nextCodes.rend(); it++) {
            res.push_back((1 << (A - 1)) + *it);
        }
    }
    return res;
}
