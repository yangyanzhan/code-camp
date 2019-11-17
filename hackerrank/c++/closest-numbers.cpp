// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/closest-numbers.html .

vector<int> closestNumbers(vector<int> arr) {
    sort(arr.begin(), arr.end());
    vector<int> res;
    int min_diff = numeric_limits<int>::max();
    for (int i = 0; i < arr.size() - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff < min_diff) {
            res.clear();
            res.push_back(arr[i]);
            res.push_back(arr[i + 1]);
            min_diff = diff;
        } else if (diff == min_diff) {
            res.push_back(arr[i]);
            res.push_back(arr[i + 1]);
        }
    }
    return res;
}
