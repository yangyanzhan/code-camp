// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/sort-by-color.html .

void Solution::sortColors(vector<int> &A) {
    int n = A.size(), begin = 0, mid = 0, end = n - 1;
    while (mid < end + 1) {
        if (A[mid] == 0) {
            swap(A[begin], A[mid]);
            begin++, mid++;
        } else if (A[mid] == 1) {
            mid++;
        } else {
            swap(A[mid], A[end]);
            end--;
        }
    }
}
