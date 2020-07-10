// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/video-part.html .

int gcd(int a, int b) {
    if (a < b) {
        return gcd(b, a);
    }
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

int ttosec(std::string time) {
    int hour = stoi(time.substr(0, 2));
    int minute = stoi(time.substr(3, 2));
    int second = stoi(time.substr(6, 2));
    return hour * 60 * 60 + minute * 60 + second;
}

std::vector<int> videoPart(std::string part, std::string total) {
    using namespace std;
    int a = ttosec(part), b = ttosec(total), g = gcd(a, b);
    return {a / g, b / g};
}
