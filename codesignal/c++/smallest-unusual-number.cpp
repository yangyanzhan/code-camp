// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/smallest-unusual-number.html .

int smallestUnusualNumber(std::string a) {
    using namespace std;
    if (a == "0") {
        return 10;
    }
    long long sum = 0, prod = 1;
    int n_0 = 0, n_1 = 0;
    for (auto ch: a) {
        int num = ch - '0';
        if (num == 0) {
            n_0++;
        }
        if (num == 1) {
            n_1++;
        }
    }
    if (n_0 == 0) {
        for (auto ch: a) {
            int num = ch - '0';
            if (num == 1) {
                n_1--;
            }
            sum += num;
            prod *= num;
            if (prod > sum + n_1) {
                break;
            }
        }
    } else {
        sum = 1;
        prod = 0;
    }
    if (sum > prod) {
        return 0;
    }
    return 10 - (a[a.size() - 1] - '0');
}

