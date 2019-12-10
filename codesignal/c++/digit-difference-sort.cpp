// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/digit-difference-sort.html .

std::vector<int> digitDifferenceSort(std::vector<int> a) {
    using namespace std;
    vector<vector<int>> pairs;
    int n = a.size();
    for (int i = 0; i < n; i++) {
        pairs.push_back({a[i], i});
    }
    function<int(int)> dd = [] (int num) {
        if (num == 0) {
            return 0;
        }
        int min_d = num % 10, max_d = min_d;
        while (num > 0) {
            int d = num % 10;
            min_d = min(min_d, d);
            max_d = max(max_d, d);
            num /= 10;
        }
        return max_d - min_d;
    };
    sort(pairs.begin(), pairs.end(), [&] (auto item1, auto item2) {
        int num1 = item1[0], idx1 = item1[1];
        int num2 = item2[0], idx2 = item2[1];
        int dd1 = dd(num1), dd2 = dd(num2);
        if (dd1 != dd2) {
            return dd1 < dd2;
        }
        return idx1 > idx2;
    });
    vector<int> res;
    for (int i = 0; i < n; i++) {
        res.push_back(pairs[i][0]);
    }
    return res;
}

