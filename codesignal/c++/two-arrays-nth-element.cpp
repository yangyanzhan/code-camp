// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/two-arrays-nth-element.html .

int twoArraysNthElement(std::vector<int> array1, std::vector<int> array2,
                        int n) {
    using namespace std;
    int i1 = 0, i2 = 0, i = -1, n1 = array1.size(), n2 = array2.size(), res;
    while (i1 < n1 && i2 < n2 && i < n) {
        int num1 = array1[i1];
        int num2 = array2[i2];
        if (num1 <= num2) {
            i1++;
            res = num1;
        } else {
            i2++;
            res = num2;
        }
        i++;
    }
    while (i < n) {
        if (i1 < n1) {
            res = array1[i1];
            i1++;
            i++;
        } else if (i2 < n2) {
            res = array2[i2];
            i2++;
            i++;
        }
    }
    return res;
}
