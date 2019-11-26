// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/digits-product.html .

int digitsProduct(int product) {
    using namespace std;
    if (product == 0) {
        return 10;
    }
    if (product == 1) {
        return 1;
    }
    string res = "";
    for (int factor = 9; factor >= 2; factor--) {
        while (product % factor == 0) {
            res = to_string(factor) + res;
            product /= factor;
        }
    }
    if (product != 1) {
        return -1;
    }
    return stoi(res);
}

