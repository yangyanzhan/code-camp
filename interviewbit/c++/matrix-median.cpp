// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/matrix-median.html .

int count1ForRow(vector<int> &row, int num) {
    int n = row.size(), begin = 0, end = n - 1, best = -1;
    while (begin <= end) {
        int middle = (begin + end) / 2;
        if (row[middle] >= num) {
            end = middle - 1;
        } else {
            best = middle;
            begin = middle + 1;
        }
    }
    return best + 1;
}

int count2ForRow(vector<int> &row, int num) {
    int n = row.size(), begin = 0, end = n - 1, best = n;
    while (begin <= end) {
        int middle = (begin + end) / 2;
        if (row[middle] <= num) {
            begin = middle + 1;
        } else {
            best = middle;
            end = middle - 1;
        }
    }
    return n - best;
}

int isMedian(vector<vector<int>> &A, int num) {
    int m = A.size(), n = A[0].size(), c1 = 0, c2 = 0, half = m * n / 2;
    for (int i = 0; i < m; i++) {
        c1 += count1ForRow(A[i], num);
        c2 += count2ForRow(A[i], num);
    }
    // cout << "c1c2:" << c1 << " " << c2 << endl;
    if (c1 <= half && c2 <= half)
        return 0;
    if (c1 > half)
        return -1;
    if (c2 > half)
        return 1;
}

int Solution::findMedian(vector<vector<int>> &A) {
    int begin = 0, end = INT_MAX;
    while (begin <= end) {
        int middle = (begin + end) / 2;
        int median = isMedian(A, middle);
        // cout << middle << " " << median << endl;
        if (median == 0)
            return middle;
        if (median < 0)
            end = middle - 1;
        if (median > 0)
            begin = middle + 1;
        // cout << begin << " " << end << endl;
    }
}
