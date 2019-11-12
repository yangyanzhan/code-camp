// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

vector<int> quickSort(vector<int> arr) {
    int pivot = arr[0];
    vector<int> lefts, rights;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= pivot) {
            lefts.push_back(arr[i]);
        } else {
            rights.push_back(arr[i]);
        }
    }
    lefts.push_back(pivot);
    lefts.insert(lefts.end(), rights.begin(), rights.end());
    return lefts;
}
