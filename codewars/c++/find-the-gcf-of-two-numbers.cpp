// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/find-the-gcf-of-two-numbers.html .

using namespace std;

int findGCF(int num1, int num2) {
    if (num1 < num2) {
        swap(num1, num2);
    }
    if (num1 % num2 == 0) {
        return num2;
    }
    return findGCF(num2, num1 % num2);
}
