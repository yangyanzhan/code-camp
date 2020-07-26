// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/birthday-i-cake.html .

using namespace std;

std::string cake(int x, std::string y) {
    double sum = 0;
    for (int i = 0; i < y.size(); i++) {
        if (i % 2 == 0) {
            sum += y[i];
        } else {
            sum += i;
        }
    }
    return sum > x * 0.7 ? "Fire!" : "That was close!";
}
