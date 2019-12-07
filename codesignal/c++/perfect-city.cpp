// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/perfect-city.html .

bool is_int(double num) {
    return num == floor(num);
}

double perfectCity(std::vector<double> departure, std::vector<double> destination) {
    using namespace std;
    double a1 = departure[0], b1 = departure[1], a2 = destination[0], b2 = destination[1];
    if ((is_int(a1) && !is_int(a2)) || (!is_int(a1) && is_int(a2))) {
        return abs(a1 - a2) + abs(b1 - b2);
    }
    if (is_int(a1) && is_int(a2)) {
        swap(a1, b1);
        swap(a2, b2);
    }
    double a3 = min(a1, a2), a4 = max(a1, a2);
    double res = 0;
    if (a4 >= floor(a3) + 1) {
        res = a4 - a3;
    } else {
        res = min(a3 + a4 - 2 * floor(a3), 2 * ceil(a3) - a3 - a4);
    }
    res += abs(b1 - b2);
    return res;
}

