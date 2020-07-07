// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/find-duplicate-in-array.html .

int bucket(int num, int n2) {
    return (num - 1) / n2;
}

int size(int i, int n, int n2) {
    if ((i + 1) * n2 <= n) {
        return n2;
    }
    return n - i * n2;
}

int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size() - 1, n2 = (int)sqrt(n), m = (int)ceil(n / (n2 + 0.0));
    vector<int> nums(m, 0);
    vector<int> tags(n2, 0);
    for (int i = 0; i < n + 1; i++) {
        int num = A[i];
        nums[bucket(num, n2)] += 1;
    }
    for (int i = 0; i < m; i++) {
        if (nums[i] > size(i, n, n2)) {
            for (int j = 0; j < n + 1; j++) {
                int num = A[j];
                if (bucket(num, n2) == i) {
                    if (tags[num % n2]) {
                        return num;
                    } else {
                        tags[num % n2] = 1;
                    }
                }
            }
            break;
        }
    }
    return -1;
}

