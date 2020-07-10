// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/allocate-books.html .

bool feasible(const vector<int> &nums, int students, int top) {
    int page = 0, i = 0, n = nums.size();
    while (i < n) {
        if (students <= 0) {
            return false;
        }
        if (page + nums[i] > top) {
            page = 0;
            students--;
        } else {
            page += nums[i];
            i++;
        }
    }
    return true;
}

int Solution::books(vector<int> &A, int B) {
    int sum = 0, n = A.size();
    if (n < B)
        return -1;
    for (int i = 0; i < n; i++)
        sum += A[i];
    int begin = sum / n, end = sum, best = -1;
    while (begin <= end) {
        int middle = (begin + end) / 2;
        if (feasible(A, B, middle)) {
            best = middle;
            end = middle - 1;
        } else {
            begin = middle + 1;
        }
    }
    return best;
}
