// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/minimum-absolute-difference-in-an-array.html .

int minimumAbsoluteDifference(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int res = numeric_limits<int>::max();
    for (int i = 0; i < arr.size() - 1; i++) {
        res = min(res, arr[i + 1] - arr[i]);
        if (res == 0) {
            break;
        }
    }
    return res;
}
