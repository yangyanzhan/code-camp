// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/celsius-vs-fahrenheit.html .

int celsiusVsFahrenheit(std::vector<int> yourTemps, std::vector<int> friendsTemps) {
    int res = 0;
    for (int i = 0; i < yourTemps.size(); i++) {
        int c1 = yourTemps[i];
        int f2 = friendsTemps[i];
        double f1 = 9.0 * c1 / 5 + 32;
        if (f1 < f2) {
            res++;
        }
    }
    return res;
}

