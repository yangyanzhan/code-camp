// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/array-conversion.html .

int arrayConversion(std::vector<int> inputArray) {
    using namespace std;
    int count = 0;
    while (inputArray.size() > 1) {
        count++;
        vector<int> tmp;
        if (count % 2 == 1) {
            for (int i = 0; i < inputArray.size() / 2; i++) {
                tmp.push_back(inputArray[2 * i] + inputArray[2 * i + 1]);
            }
            inputArray = tmp;
        } else {
            for (int i = 0; i < inputArray.size() / 2; i++) {
                tmp.push_back(inputArray[2 * i] * inputArray[2 * i + 1]);
            }
            inputArray = tmp;
        }
    }
    return inputArray[0];
}

