// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/ice-cream-parlor.html .

bool compare(tuple<int, int> info1, tuple<int, int> info2) {
    return get<0>(info1) < get<0>(info2);
}

vector<int> icecreamParlor(int m, vector<int> arr) {
    vector<tuple<int, int>> infos;
    for (int i = 0; i < arr.size(); i++) {
        infos.push_back(make_tuple(arr[i], i + 1));
    }
    sort(infos.begin(), infos.end(), compare);
    int i = 0, j = infos.size() - 1;
    while (i < j) {
        int num1 = get<0>(infos[i]), num2 = get<0>(infos[j]);
        if (num1 + num2 < m) {
            i++;
        } else if (num1 + num2 > m) {
            j--;
        } else {
            auto res = vector<int>{get<1>(infos[i]), get<1>(infos[j])};
            sort(res.begin(), res.end());
            return res;
        }
    }
    return vector<int>();
}
