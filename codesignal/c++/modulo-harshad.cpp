// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/modulo-harshad.html .

bool isHarshad(long long num) {
    using namespace std;
    int sum = 0;
    string item = to_string(num);
    for (int i = 0; i < item.size(); i++) {
        sum += item[i] - '0';
    }
    return num % sum == 0;
}

long long moduloHarshad(long long num1, long long num2) {
    int c = 0, a = 0, b = 0, num = 0;
    while (c < max(num1, num2)) {
        num++;
        if (isHarshad(num)) {
            c++;
            if (c == num1) {
                a = num;
            }
            if (c == num2) {
                b = num;
            }
        }
    }
    return b % a;
}
