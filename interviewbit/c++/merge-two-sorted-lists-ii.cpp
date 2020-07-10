// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/merge-two-sorted-lists-ii.html .

void Solution::merge(vector<int> &A, vector<int> &B) {
    int m = B.size(), i = 0;
    for (int j = 0; j < m; j++) {
        int b = B[j];
        while (i < A.size()) {
            if (A[i] > b) {
                break;
            }
            i++;
        }
        if (i < A.size()) {
            A.insert(A.begin() + i, b);
        } else {
            A.push_back(b);
        }
    }
}
