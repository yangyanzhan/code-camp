// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/ten-power.html .

int tens(int n) { return (n % 100) / 10; }

int TenPower(std::vector<int> numbers) {
    int res = 0, count = 0;
    for (int i = 0; i < numbers.size(); i++) {
        int n = numbers[i];
        if (n >= 10) {
            if (count % 2 == 0) {
                res += tens(n);
            } else {
                res -= tens(n);
            }
            count++;
        }
    }
    return res;
}
