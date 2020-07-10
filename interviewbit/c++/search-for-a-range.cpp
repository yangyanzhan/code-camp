// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/search-for-a-range.html .

int find1(const vector<int> &A, int B) {
    int n = A.size(), begin = 0, end = n - 1, found = -1;
    while (begin <= end) {
        int middle = (begin + end) / 2;
        if (A[middle] == B) {
            found = middle;
            end = middle - 1;
        } else if (A[middle] > B) {
            end = middle - 1;
        } else {
            begin = middle + 1;
        }
    }
    return found;
}

int find2(const vector<int> &A, int B) {
    int n = A.size(), begin = 0, end = n - 1, found = -1;
    while (begin <= end) {
        int middle = (begin + end) / 2;
        if (A[middle] == B) {
            found = middle;
            begin = middle + 1;
        } else if (A[middle] > B) {
            end = middle - 1;
        } else {
            begin = middle + 1;
        }
    }
    return found;
}

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    return vector<int>{find1(A, B), find2(A, B)};
}
