// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/largest-permutation.html .

vector<int> largestPermutation(int k, vector<int> arr) {
    int n = arr.size();
    int *idxes = new int[n + 1];
    for (int i = 0; i < n; i++) {
        idxes[arr[i]] = i;
    }
    for (int i = 0; i < n && k > 0; i++) {
        if (arr[i] != n - i) {
            int idx1 = i, idx2 = idxes[n - i], num1 = arr[i], num2 = n - i;
            arr[idx1] = num2;
            arr[idx2] = num1;
            idxes[num1] = idx2;
            idxes[num2] = idx1;
            k--;
        }
    }
    return arr;
}
