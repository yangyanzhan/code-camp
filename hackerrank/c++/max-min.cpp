// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/max-min.html .

int maxMin(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int res = numeric_limits<int>::max();
    for (int i = k - 1; i < arr.size(); i++) {
        res = min(res, arr[i] - arr[i - (k - 1)]);
    }
    return res;
}
