// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/caesar-box-cipher-encoding.html .

std::string caesarBoxCipherEncoding(std::string inputString) {
    using namespace std;
    int n = ceil(sqrt(inputString.size()));
    string res = "";
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            int idx = i * n + j;
            if (idx < inputString.size()) {
                res += inputString[idx];
            }
        }
    }
    return res;
}
