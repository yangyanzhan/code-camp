// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/is-unstable-pair.html .

bool isUnstablePair(std::string filename1, std::string filename2) {
    using namespace std;
    string f1, f2;
    for (int i = 0; i < filename1.length(); i++) {
        f1 += tolower(filename1[i]);
    }
    for (int i = 0; i < filename2.length(); i++) {
        f2 += tolower(filename2[i]);
    }
    return (filename1 <= filename2 && f1 >= f2) ||
           (filename1 >= filename2 && f1 <= f2);
}
