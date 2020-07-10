// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/rotate-matrix.html .

void print(vector<vector<int>> &A) {
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < A.size(); j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void Solution::rotate(vector<vector<int>> &A) {
    int i, k, layer, n = A.size();
    for (layer = 0; layer < n / 2; layer++) {
        for (i = 0; i < n - 1 - layer * 2; i++) {
            swap(A[layer][layer + i], A[layer + i][n - 1 - layer]);
        }
        for (i = 0; i < n - 1 - layer * 2; i++) {
            swap(A[layer][layer + i], A[n - 1 - layer - i][layer]);
        }
        for (i = 0; i < n - 1 - layer * 2; i++) {
            swap(A[n - 1 - layer - i][layer],
                 A[n - 1 - layer][n - 1 - layer - i]);
        }
    }
}
