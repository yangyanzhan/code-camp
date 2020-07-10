// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/sorted-insert-position.html .

int Solution::searchInsert(vector<int> &A, int B) {
    int n = A.size(), begin = 0, end = n - 1;
    while (begin < end) {
        int middle = (begin + end) / 2;
        if (A[middle] == B) return middle;
        if (A[middle] < B) begin = middle + 1;
        else end = middle - 1;
    }
    if (A[begin] < B) return begin + 1;
    return begin;
}

