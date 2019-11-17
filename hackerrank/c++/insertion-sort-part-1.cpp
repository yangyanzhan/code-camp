// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/insertion-sort-part-1.html .

void insertionSort1(int n, vector<int> arr) {
    int last = arr[arr.size() - 1], i;
    for (i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] > last) {
            arr[i + 1] = arr[i];
            for (int j = 0; j < arr.size(); j++) {
                cout << arr[j] << " ";
            }
            cout << endl;
        } else {
            arr[i + 1] = last;
            break;
        }
    }
    if (arr[0] > last) {
        arr[0] = last;
    }
    for (int j = 0; j < arr.size(); j++) {
        cout << arr[j] << " ";
    }
}
