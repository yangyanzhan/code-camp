// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

long countInversions(vector<int>::iterator it1, vector<int>::iterator it2, int n) {
    if (n <= 1) {
        return 0;
    }
    int n1 = n / 2, n2 = n - n1;
    long res1 = countInversions(it1, it2, n1);
    long res2 = countInversions(it1 + n1, it2 + n1, n2);
    long res = res1 + res2;
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        int num1 = *(it1 + i), num2 = *(it1 + n1 + j);
        if (num1 <= num2) {
            *(it2 + k++) = num1;
            i++;
        } else {
            *(it2 + k++) = num2;
            j++;
            res += n1 - i;
        }
    }
    while (i < n1) {
        *(it2 + k++) = *(it1 + i++);
    }
    while (j < n2) {
        *(it2 + k++) = *(it1 + n1 + j++);
    }
    copy(it2, it2 + n, it1)
    return res;
}

long countInversions(vector<int> &arr) {
    vector<int> tmp(arr.begin(), arr.end());
    return countInversions(arr.begin(), tmp.begin(), arr.size());
}
