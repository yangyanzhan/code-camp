// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/rearrange-array.html .

void Solution::arrange(vector<int> &A) {
    int n = A.size();
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        int num = A[i], idx = i;
        if (num == idx || visited[idx]) {
            continue;
        }
        visited[idx] = true;
        A[idx] = A[num];
        idx = num;
        while (true) {
            visited[idx] = true;
            int next = A[idx];
            if (next == i) {
                A[idx] = num;
                break;
            } else {
                A[idx] = A[next];
                idx = next;
            }
        }
    }
}
