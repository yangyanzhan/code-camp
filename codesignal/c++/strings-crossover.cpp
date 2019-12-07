// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/strings-crossover.html .

int stringsCrossover(std::vector<std::string> inputArray, std::string result) {
    using namespace std;
    int res = 0;
    for (int i1 = 0; i1 < inputArray.size(); i1++) {
        for (int i2 = i1 + 1; i2 < inputArray.size(); i2++) {
            string s1 = inputArray[i1], s2 = inputArray[i2];
            bool valid = true;
            for (int i = 0; i < result.size(); i++) {
                if ((result[i] == s1[i]) || (result[i] == s2[i])) {
                } else {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                res++;
            }
        }
    }
    return res;
}

