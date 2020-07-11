// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/nearest-smaller-element.html .

vector<int> Solution::prevSmaller(vector<int> &A) {
    int n = A.size();
    vector<int> res(n), indexes(n, -1);
    if (n == 0)
        return res;
    indexes[0] = -1;
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        while (j >= 0) {
            if (A[j] < A[i]) {
                indexes[i] = j;
                break;
            } else {
                int index = indexes[j];
                if (index == -1) {
                    indexes[i] = -1;
                    break;
                } else {
                    j = index;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (indexes[i] == -1) {
            res[i] = -1;
        } else {
            res[i] = A[indexes[i]];
        }
    }
    return res;
}
