// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

int maxSubsetSum(vector<int> arr) {
    int with_last = arr[0], without_last = 0;
    for (int i = 1; i < arr.size(); i++) {
        int old_without_last = without_last;
        without_last = max(with_last, without_last);
        with_last = old_without_last + arr[i];
    }
    return max(with_last, without_last);
}
