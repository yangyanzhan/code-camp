// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/counting-sort-2.html .

vector<int> countingSort(vector<int> arr) {
    vector<int> cnts(100, 0);
    for (auto num: arr) {
        cnts[num]++;
    }
    vector<int> res;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < cnts[i]; j++) {
            res.push_back(i);
        }
    }
    return res;
}
