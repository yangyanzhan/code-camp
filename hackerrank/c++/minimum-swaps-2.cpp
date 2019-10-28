// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

int minimumSwaps(vector<int> arr) {
    int res = 0;
    for (int i = 0; i < arr.size(); i++) {
        int num = arr[i];
        while (num - 1 != i) {
            iter_swap(arr.begin() + i, arr.begin() + num - 1);
            num = arr[i];
            res++;
        }
    }
    return res;
}
